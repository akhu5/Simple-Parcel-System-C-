#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>


class Parcel
{
		private:
				 int Cid;
				 char Sname[20];	//Name of the sender
				 char Rname[20];	//Name of the receiver
				 char Sadd[40];		//Address of the sender
				 char Radd[40];		//Address of the Receiver
				 float Weight;		//Measured weight of the parcel
				 int No;			//Number of parcels of same category
				 char Customer;	 	//Type of customer
				 char Type;			//To specify the distance of the parcel
				 char Mode;			//To specify the service
				 char Id[30];		//Email id
				 char Cno[10];		//Contact number
				 int Cost;			//To store the calculated cost for sending
				 char Status[20];  	//To provide the status
				 char Date[10];	 	//Date of booking
				 float w;

				 void CalWeight()
				 {
						cin>>Weight;
						if (Weight<=2.0)
							  w=0.5;
						else
							  Weight=w;
							  }

				 void Calculatecost()
				 {
						int a,b,c;
						{
							 if(Customer=='I'||Customer=='i')
							  a=1.5;
							else if(Customer=='B'||Customer=='b')
								a=1.2;
							 }
						 {
							  if(Type=='A'||Type=='a')
							  b=10000;
							 else if(Type=='N'||Type=='n')
							  b=500;
							}
						 {
							 if(Mode=='E'||Mode=='e')
							  c=3000;
							 else if(Mode=='N'||Mode=='n')
							  c=100;
						  }
						 Cost=w*No*a*(b+c);
						 }
		public:
				 void Get()
				 {
						cout<<"Enter your UIN                        : ";
						cin>>Cid;
						cout<<"\n Your Customer id is                : "<<Cid;
						cout<<"\n Enter the Sender's name             : ";
						gets(Sname);
						cout<<"\n Enter the Receiver's name           : ";
						gets(Rname);
						cout<<"\n Enter the address of the Sender     : ";
						gets(Sadd);
						cout<<"\n Enter the address of the Receiver   : ";
						gets(Radd);
						cout<<"\n Enter the Measured weight of parcel : ";
						CalWeight();
						cout<<"\n Enter number of parcels             : ";
						cin>>No;
						cout<<"\n Type of customer: ";
						cout<<"\n  Enter I for Individual";
						cout<<"\n  Enter B for Business              : ";
						cin>>Customer;
						cout<<"\n Enter Destination type";
						cout<<"\n  A for Abroad";
						cout<<"\n  N for National                    : ";
						cin>>Type;
						cout<<"\n  Enter E for Express Delivery";
						cout<<"\n  N for Normal Delivery             : ";
						cin>>Mode;
						Calculatecost();
						cout<<"\n Enter your Email ID                : ";
						cin>>Id;
						cout<<"\n Enter Contact number               : ";
						cin>>Cno;
						cout<<"\n Enter date of registration(dd/mm/yy): ";
						gets(Date);
						cout<<"\n Your Customer id is                : "<<Cid;
						strcpy(Status,"Registered");
					 }

				 void Get1()
					 {
							cout<<"\n Enter the status of the parcel";
						  gets(Status);
					 }

				void Put()
					 {
							  cout<<"\n Customer Id          :"<<Cid;
							  cout<<"\n Sender's name          : ";
							  puts(Sname);
							  cout<<"\n Receiver's Name        : ";
							  puts(Rname);
							  cout<<"\n Address of the Sender   : ";
							  puts(Sadd);
							  cout<<"\n Address of the Reciever : ";
							  puts(Radd);
							  cout<<"\n Email id                : ";
							  puts(Id);
							  cout<<"\n Contact number         : ";
							  puts(Cno);
							  cout<<"\n Date of registration    : ";
							  puts(Date);
							  cout<<"\n Weight                  : ";
							  cout<<Weight;
							  cout<<"\n Number of parcel        : ";
							  cout<<No;
							  cout<<"\n Customer Type           : ";
							  cout<<Customer;
							  cout<<"\n Destination             : ";
							  cout<<Type;
							  cout<<"\n Type of Service         : ";
							  cout<<Mode;
							  cout<<"\n Cost                    : ";
							  cout<<Cost;
							  cout<<"\n Status                  : ";
							  puts(Status);

					 }
				int Search()
				  {
							 return(Cid);
				  }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Mail
{
		private:
				 int Mid;			 //Id of the Parcel
				 char MSname[20];	 //Name of the sender
				 char MRname[20];	 //Name of the receiver
				 char MSadd[40];	 //Address of the sender
				 char MRadd[40];	 //Address of the Receiver
				 float MWeight;	 //Measured weight of the parcel
				 int MNo;			 //Number of parcel of same category
				 char MCustomer;	 //Type of customer
				 char MType;		 //To specify the distance of the parcel
				 char MMode;		 //To specify the speed
				 char MId[30];		 //Email id
				 char MCno[10];	 //Contact number
				 int MCost;			 //To store the calculated cost to send
				 char MStatus[20]; //to give info of the location
				 char MDate[10];	 //Date of booking

				 void Calculatecost1()
				 {
						 int a,b,c;
						 {
							  if(MCustomer=='M'||MCustomer=='m')
							 a=1.5;
							 else if(MCustomer=='P'||MCustomer=='p')
							  a=1.2;
						}
					  {
							  if(MType=='A'||MType=='a')
							 b=10000;
							 else if(MType=='N'||MType=='n')
							 b=500;
					  }
					  {
								if(MMode=='E'||MMode=='e')
							  c=3000;
							 else if(MMode=='N'||MMode=='n')
							  c=100;
					  }
					  MCost=MNo*a*(b+c);
				 }
		public:
				 void Get()
				 {
					  cout<<"\n Enter your UIN                     :";
					  cin>>Mid;
					  cout<<"\n Your Customer id is                : "<<Mid;
					  cout<<"\n Enter the Sender's name             : ";
					  gets(MSname);
					  cout<<"\n Enter the Receiver's name           : ";
					  gets(MRname);
					  cout<<"\n Enter the address of Sender         : ";
					  gets(MSadd);
					  cout<<"\n Enter the address of Receiver       : ";
					  gets(MRadd);
					  cout<<"\n Enter the Measured weight of parcel : ";
					  cin>>MWeight;
					  cout<<"\n Enter Number of parcel              : ";
					  cin>>MNo;
					  cout<<"\n Enter type of MAIL ";
					  cout<<"\n  Enter M for Mail";
					  cout<<"\n  Enter P for Money order           : ";
					  cin>>MCustomer;
					  cout<<"\n Enter Destination type";
					  cout<<"\n  A to send Abroad";
					  cout<<"\n  N to send National                    : ";
					  cin>>MType;

					  cout<<"\n  Enter E for Express Delivery";
					  cout<<"\n  N for Normal Services             : ";
					  cin>>MMode;
					  Calculatecost1();
					  cout<<"\n Enter your Email id                : ";
					  cin>>MId;
					  cout<<"\n Enter the Contact number           : ";
					  cin>>MCno;
					  cout<<"\n Enter date of registration(dd/mm/yy): ";
					  gets(MDate);
					  cout<<"\n Your Customer id is                : "<<Mid;
					  strcpy(MStatus,"Registered");
				 }

				 void Get1()
					 {
							cout<<"\n Enter the status of the mail";
						  gets(MStatus);
					 }

				void Put()
				 {
					  cout<<"\n Customer Id          : "<<Mid;
					  cout<<"\n Sender's name        : ";
					  puts(MSname);
					  cout<<"\n Receiver's name      : ";
					  puts(MRname);
					  cout<<"\n Address of Sender    : ";
					  puts(MSadd);
					  cout<<"\n Address of Receiver  : ";
					  puts(MRadd);
					  cout<<"\n Email id             : ";
					  puts(MId);
					  cout<<"\n Contact number       : ";
					  puts(MCno);
					  cout<<"\n Date of registration : ";
					  puts(MDate);
					  cout<<"\n Weight               : ";
					  cout<<MWeight;
					  cout<<"\n Number of parcels    : ";
					  cout<<MNo;
					  cout<<"\n Customer Type        : ";
					  cout<<MCustomer;
					  cout<<"\n Destination          : ";
					  cout<<MType;
					  cout<<"\n Type of Service      : ";
					  cout<<MMode;
					  cout<<"\n Cost                 : ";
					  cout<<MCost;
					}

					int Search()
				  {
							 return(Mid);
				  }

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Input()
{
	ofstream fout ("parcel.dat",ios::binary|ios::app);
	Parcel P;
	P.Get();
	fout.write((char *)&P,sizeof(P));
	fout.close();
}


void Input1()
{
	ofstream fout ("mail.dat",ios::binary|ios::app);
	Mail m;
	m.Get();
	fout.write((char *)&m,sizeof(m));
	fout.close();
}



void Output()
{
	ifstream fin ("parcel.dat",ios::binary);
	Parcel P;
	while (fin.read((char*)&P,sizeof(P)))
		{
			P.Put();
		}
	fin.close();
}

void Output1()
{
	ifstream fin ("mail.dat",ios::binary);
	Mail m;
	while (fin.read((char*)&m,sizeof(m)))
		{
			m.Put();
		}
	fin.close();
}


void Display()
{
	ifstream fin("parcel.dat",ios::binary);
	Parcel P ;
	int yo;
	cout<<"\n Enter customer id: "<<endl;
	cin>>yo;
	while(fin.read((char*)&P,sizeof(P)))
	{
	 if(yo==P.Search())
	  P.Put();
	 }
	fin.close();
}

void Display1()
{
	ifstream fin("mail.dat",ios::binary);
	Mail m ;
	int yo;
	cout<<"\n Enter customer id: "<<endl;
	cin>>yo;
	while(fin.read((char*)&m,sizeof(m)))
	{
	 if(yo==m.Search())
	  m.Put();
	 }
	fin.close();
}


void Edit()
{
	ifstream fin("parcel.dat",ios::binary);
	Parcel P ;
	int yo;
	cout<<"\n Enter customer id: "<<endl;
	cin>>yo;
	while(fin.read((char*)&P,sizeof(P)))
	{
	  if(yo==P.Search())
		{
		 P.Get1();
		 fin.seekg(-1*sizeof(P),ios::cur);
		 ofstream fout("parcel.dat",ios::binary);
		 fout.write((char*)&P,sizeof(P));
		 fout.close();
		}
	  else
	  cout<<"\n Give correct input now: "<<endl<<endl;
	}
	fin.close();
}

void Edit1()
{
	ifstream fin("mail.dat",ios::binary);
	Mail m ;
	int yo;
	cout<<"Enter customer id: "<<endl;
	cin>>yo;
	while(fin.read((char*)&m,sizeof(m)))
	{
	  if(yo==m.Search())
		{
		 m.Get1();
		 fin.seekg(-1*sizeof(m),ios::cur);
		 ofstream fout("mail.dat",ios::binary);
		 fout.write((char*)&m,sizeof(m));
		 fout.close();
		}
	  else
	  cout<<"\n Give correct input now: "<<endl<<endl;
	}
	fin.close();
}



void Delete()
{
	fstream f,j;
	f.open("parcel.dat",ios::binary|ios::in);
	j.open("Temp.dat",ios::binary|ios::out);
	Parcel P;
	int a;
	cout<<"\n Enter your id: "<<endl;
	cin>>a;
	while(f)
	{
	  f.read((char*)&P,sizeof(P));
		 if(a!= P.Search())
		  {
			j.write((char*)&P,sizeof(P));
		  }
	}
	f.close();
	j.close();
	remove("parcel.dat");
	rename("temp.dat","parcel.dat");
}

void Delete1()
{
	fstream f,j;
	f.open("mail.dat",ios::binary|ios::in);
	j.open("Temp.dat",ios::binary|ios::out);
	Mail m;
	int a;
	cout<<"\n Enter your id: "<<endl;
	cin>>a;
	while(f)
	{
	  f.read((char*)&m,sizeof(m));
		 if(a!= m.Search())
		  {
			j.write((char*)&m,sizeof(m));
		  }
	}
	f.close();
	j.close();
	remove("mail.dat");
	rename("temp.dat","mail.dat");
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void intro()
{
	ifstream fin("intro.txt");
	char ch;
	while (fin)
	{
	  fin.get(ch);
	  cout<<ch;
	}
	fin.close();
}


int Password()
 {
  char us[20],ps[20];
  cout<<"\n Enter the Admin name: "<<"\t";
  cin>>us;
  cout<<"\n Enter the Password: "<<"\t";
  cin>>ps;
  if((strcmp(us,"DEBABRATA")||(us,"debabrata")==0)&& (strcmp(ps,"c++"))==0)
  return(1);
  if((strcmp(us,"AKHIL")||(us,"akhil")==0)&& (strcmp(ps,"andromeda"))==0)
  return(1);
  else
  cout<<"\n Wrong password!!";
  return(0);
 }



void main()
{
	  int b;
	  intro();
	  cin>>b;
	  clrscr();
	  int a=1,choicea,choice,option,options,y=1,x=1,z=1,d=1,e=1,f=1;
	  while(a)
		{
             cout<<"\t\t\t\t WELCOME!";
				 cout<<"\n Press 1 to open the Parcel system";
				 cout<<"\n Press 2 to open the Mail system";
				 cout<<"\n Enter 6 for exit"<<endl<<endl;
				 cin>>choicea;
				 switch (choicea)
				  {
					case 1:
					clrscr();
					while(x)
					{
					 cout<<"\n Enter 1 if Administrator";
					 cout<<"\n Enter 2 if User"<<endl<<endl;
					 cin>>choice;
					 clrscr();
					 switch(choice)
					 {

						case 1:
						{
						 y=Password();
                   clrscr();
						 while(y)
						 {
                    cout<<"\n WELCOME ADMINISTRATOR!";
						  cout<<"\n  Enter 1 for Output";
						  cout<<"\n  Enter 2 to Edit";
						  cout<<"\n  Enter 3 to Logout"<<endl<<endl;
						  cin>>option;
						  switch(option)
						  {
							case 1:
							Output();
							break;

							case 2:
							Edit();
							break;

							case 3:
							y=0;
						  }
						 }
						}
						break;

						case 2:
						{
                   cout<<"\n WELCOME USER!";
						 while(z)
						 {
						  cout<<"\n  Enter 1 for Input";
						  cout<<"\n  Enter 2 for See your status";
						  cout<<"\n  Enter 3 to Cancel your booking";
						  cout<<"\n  Enter 4 to Quit"<<endl<<endl;
						  cin>>options;
						  switch(options)
						  {
							case 1:
							Input();
							break;

							case 2:
							Display();
							break;

							case 3:
							Delete();
							break;

							case 4:
							z=0;
						  }
						 }
						}
						break;

					  default :
						x=0;
					  }
					 }
					 break;

					case 2:
					 clrscr();
					 while(d)
					 {
					  clrscr();
					  cout<<"\n  Enter 1 if Administrator";
					  cout<<"\n  Enter 2 if User"<<endl<<endl;
					  cin>>choice;
					  switch(choice)
					  {
						case 1:
						{
						 e=Password();
						 while(e)
						 {
						  clrscr();
						  cout<<"\n  Enter 1 for Output";
						  cout<<"\n  Enter 2 to Edit";
						  cout<<"\n  Enter 3 to Logout"<<endl<<endl;
						  cin>>option;
						  switch(option)
						  {
							case 1:
							Output1();
							break;

							case 2:
							Edit1();
							break;

							case 3:
							e=0;
						  }
						 }
						}
						break;

						case 2:
						{
						 while(f)
						  {
							cout<<"\n  Enter 1 for Input";
							cout<<"\n  Enter 2 for See your stauts";
							cout<<"\n  Enter 3 to Cancel your booking";
							cout<<"\n  Enter 4 to Quit"<<endl<<endl;
							cin>>options;
							switch(options)
							 {
							  case 1:
							  Input1();
							  break;

							  case 2:
							  Display1();
							  break;

							  case 3:
							  Delete1();
							  break;

							  case 4:
							  f=0;
							 }
							}
						  }

						  break;

						default :
						 d=0;
					  }
					 }
					break;

					default:
					 a=0;
					 cout<<"Thank You. Goodbye!";
				 }
		}
}
