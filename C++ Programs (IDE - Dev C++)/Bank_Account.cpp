//Banking Management
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

void getData();
void showData();
void inQuery();
void debitMoney();
void deleteAccount();
void creditMoney();
int accountno;
char agree;
class Bank
{
	private :
		int withAmount;
		char name[20],address[30],fname[20],mname[20],dob[20],nominiName[20];
		char ch;
	public :
	int choice,accno,currentBalance;	
		void entryPage()
		{ 
			system("cls");
			cout<<"\n\n\t_____________________________________________\n";
			cout<<"\t -------------------------------------------\n\n";
			cout<<"\n\n\t\t\tB A N K\n\n";
			cout<<"\t\n\n\t\t  M A N A G E M E N T\n\n";
			cout<<"\t\n\n\t\t      S Y S T E M\n\n\n";
			cout<<"\n\t -------------------------------------------\n";
			cout<<"\t_____________________________________________\n\n\t";
			system("pause");
			system("cls");
		}
		int createAccount()
		{
			system("cls");
			cout<<"\n\n\t<---------------Account Opening Form--------------->\n\n";
			cout<<"\n\tEnter Account No. :";
			cin>>accno;			
			cout<<"\n\tEnter Name : ";
			cin.ignore();
			cin.getline(name,20);
			cout<<"\n\tEnter Father Name : ";
			fflush(stdin);
			cin.getline(fname,20);
			cout<<"\n\tEnter Mother Name : ";
			fflush(stdin);
			cin.getline(mname,20);
			cout<<"\n\tEnter Date of Birth : ";
			fflush(stdin);
			cin.getline(dob,15);
			cout<<"\n\tEnter Address : ";
			fflush(stdin);
			cin.getline(address,25);
			cout<<"\n\tDo u want to open Saving/Current Account (Enter S/C) : ";
			cin>>ch;
			if(ch=='S'||ch=='s')
				currentBalance=500;
			else
				currentBalance=1000;				
			cout<<"\n\tEnter Nomini name : ";
			cin.ignore();
			cin.getline(nominiName,25);
			cout<<"\n\tAre u agree with the Terms And Conditions. (YES/NO) : ";
			cin>>agree;
			if(agree=='y' || agree=='Y')
			{
			cout<<"\n\n\t\t     Your Account Number is : BAN"<<accno<<"\n";
			cout<<"\n\n\t\tYour account has been created successully\n\t";
			cout<<"\n\t =====================================================\n\n\t";
			system("pause");
			system("cls");
			return 1;
			}
			else
				entryPage();
		}
		void depositAmount(int Amount)
		{
			currentBalance+=Amount;
			cout<<"\n\n\tCurrent Balance is : "<<currentBalance;
		}
		void withdrawAmount(int amount)
		{
			currentBalance-=amount;
			cout<<"\n\n\tCurrent Balance is : "<<currentBalance;
		}
		void balanceEnquiry(int accno)
		{
			cout<<"\n\tAccount Number :- BAN"<<accno<<"\n\n\tAccount Holder Name :- "<<name<<"\n\n\tCurrent Balance :- "<<currentBalance<<"\n\t";
		}
		int accountList()
		{
			cout<<"BAN"<<accno<<"\t"<<name<<"\t"<<fname<<"\t"<<dob<<"\t"<<ch<<"\t"<<address<<"\n\t";
			return 1;
		}	
		void ending()
		{
			system("cls");
	    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
			cout<<"\n\n\tProgrammer :   Satyam Singh\n\t\t    BCA (II-nd Semester)\n\t\t    SGRR UNIVERSITY\n";
			cout<<"\n\t\t    Date : 06-07-2020";
	    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
			exit(0);
		}	
		int retur()	{	return accno;	}
};

int main()
{ 
	Bank B1;
	B1.entryPage();
	while(1)
	{
		cout<<"\n\n\t<---------------Main Menu--------------->\n\n";
		cout<<"\t1.Create an Account\n\n\t2.Deposit Amount\n\n\t3.Withdrawal Amount\n\n\t4.Balance Enquiry\n\n\t5.Close Account\n\n\t6.Account List\n\n\t7.Exit\n\n\t";
		cout<<"Select Option Number :";
		cin>>B1.choice;
		switch(B1.choice)
		{
			case 1:	getData();	break;	
			case 2:	debitMoney();	break;			
			case 3:	creditMoney();	break;			
			case 4:	inQuery();	break;	
			case 5:	deleteAccount();	break;			
			case 6:	showData();		break;	
			case 7:	B1.ending();		break;	
			default: cout<<"\n\tWrong choice!!";	break;	
		};
	}
	return 0;
}
void getData()
{
	Bank B1;
	ofstream outFile;
	outFile.open("student.dat",ios::binary|ios::app);
	int p=B1.createAccount();
	if(p==1)
		outFile.write((char *) &B1, sizeof(Bank));		
	outFile.close();
}
void showData()
{
	int p=0;
	system("cls");
	Bank B1;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\tFile could not be open !! Press any Key...";
		getch();
		return;
	}
	cout<<"\n\t<---------------------Account List--------------------->\n\n";
	cout<<"\n\tAcc-No.\tAcc-Holder\tFather Name\t D.O.B \t    Acc type\tAddress\n";
	cout<<"\n\t============================================================================================\n\n\t";
	while(inFile.read((char *) &B1, sizeof(Bank)))
		p=B1.accountList();		
	if(p!=1)
		cout<<"\n\t\tEmpty Record\n";
	inFile.close();
	cout<<"\n\t============================================================================================\n\n\t";
	system("pause");
	system("cls");
}
void inQuery()
{
	system("cls");
	Bank B1;
	cout<<"\n\n\n\t<---------------Balance Enquiry--------------->\n\n";
	cout<<"\n\tEnter Amount number : ";
	cin>>accountno;
	cout<<"\n\n\tYour Account Details...\n\n";
	cout<<"\n\t=================================================\n\n\t";
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	int flag=0;
	while(inFile.read(reinterpret_cast<char *> (&B1), sizeof(Bank)))
	{
		if(B1.retur()==accountno)
		{
			B1.balanceEnquiry(accountno);
			flag=1;
		}
	}
	if(flag==0)
		cout<<"\n\n\t\tRecord not exist";
	inFile.close();
	cout<<"\n\t=================================================\n\n\t";
	system("pause");
	system("cls");	
}
void deleteAccount()
{
	system("cls");
	Bank B1;
	cout<<"\n\n\n\t<---------------Deposit Amount--------------->\n\n";
	cout<<"\n\tEnter Account number : ";
	cin>>accountno;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	ofstream outFile;
	outFile.open("Temp.dat",ios::binary|ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read((char *) (&B1), sizeof(Bank)))
		if(B1.retur()!=accountno)
			outFile.write((char *) (&B1), sizeof(Bank));
	outFile.close();
	inFile.close();	
	remove("student.dat");
	rename("Temp.dat","student.dat");		
	cout<<"\n\n\t\tYour amount has been removed successully\n\t";
	cout<<"\n\t ---------------------------------------------------\n\n\t";
	system("pause");
	system("cls");
}

void debitMoney()
{
	int flag=0,depAmount;
	Bank B1;
	system("cls");
	cout<<"\n\n\n\t<---------------Deposit Amount--------------->\n\n";
	cout<<"\n\tEnter Account number : ";
	cin>>accountno;
	cout<<"\n\tEnter amount : ";
	cin>>depAmount;
	cout<<"\n\tAre u sure (Yes/No) :";
	cin>>agree;
	if(agree=='y' || agree=='Y')
	{
		ifstream inFile;
		inFile.open("student.dat",ios::binary);
		ofstream outFile;
		outFile.open("Temp.dat",ios::binary|ios::out);
		while(inFile.read((char *) (&B1), sizeof(Bank)))
		{
			if(B1.retur()==accountno)
			{
				B1.depositAmount(depAmount);
				outFile.write((char *) (&B1), sizeof(Bank));
				 flag=1;			 
			}
			else
				outFile.write((char *) (&B1), sizeof(Bank));
		}
		outFile.close();
		inFile.close();
		if(flag==0)
			cout<<"\n\tAccount doesn't exist...\n";
		else
			cout<<"\n\n\t\tYour amount has been deposit successully\n\t";
		cout<<"\n\t ---------------------------------------------------\n\n\t";
		remove("student.dat");
		rename("Temp.dat","student.dat");		
		system("pause");
		system("cls");
	}
	else
	B1.entryPage();
}
void creditMoney()
{
	int withAmount,flag=0;
	Bank B1;
	system("cls");
	cout<<"\n\n\n\t<---------------Withdraw Money--------------->\n\n";
	cout<<"\n\tEnter Account number : ";
	cin>>accountno;
	cout<<"\n\tEnter amount : ";
	cin>>withAmount;
	cout<<"\n\tAre u sure (Yes/No) :";
	cin>>agree;
	if(agree=='y' || agree=='Y')
	{
		ifstream inFile;
		inFile.open("student.dat",ios::binary);
		ofstream outFile;
		outFile.open("Temp.dat",ios::binary|ios::out);	
		while(inFile.read((char *) &B1, sizeof(Bank)))
		{
			if(B1.retur()==accountno)
			{
				B1.withdrawAmount(withAmount);
				outFile.write((char *) &B1, sizeof(Bank));
				 flag=1;			 
			}
			else
				outFile.write((char *) (&B1), sizeof(Bank));
		}
		outFile.close();
		inFile.close();
		if(flag==0)
			cout<<"\n\tAccount doesn't exist...\n";
		else	
			cout<<"\n\n\t\tYour amount has been withdrawn successully\n\t";
		remove("student.dat");
		rename("Temp.dat","student.dat");		
		cout<<"\n\t ---------------------------------------------------\n\n\t";		
		system("pause");
		system("cls");	
	}
	else
		B1.entryPage();
}
