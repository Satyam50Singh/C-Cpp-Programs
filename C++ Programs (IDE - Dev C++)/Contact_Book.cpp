//Contact Book
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void createList();
void showContactList();
void searchContact();
void renameContact();
void deleteContact();
void deleteContactList();
class ContactBook
{
	private :
		char ch,name[20],number[3][11];
	public :
		void entryPage()
		{
			cout<<"\n\n\t===============================================\n";
			cout<<"\n\n\t\tC . O . N . T . A . C . T\n\n\t\t      B . O . O . K\n";
			cout<<"\n\n\t===============================================\n\n\t\t";
			system("pause");
			system("cls");
		}
		void getNumber()
		{
			system("cls");
			cout<<"\n\n\t\t\tAdd new Contact\n";
			cout<<"\n\t===============================================\n";
			cout<<"\n\tEnter your name : ";
			fflush(stdin);
			cin.getline(name,20);
			cout<<"\n\tEnter number : ";
			fflush(stdin);
			cin.getline(number[0],12);
			cout<<"\n\tDo u want to add another number with the same name (Y/N) : ";
			cin>>ch;
			if(ch=='Y' || ch=='y')
			{
				cout<<"\n\tEnter number : ";
				fflush(stdin);
				cin.getline(number[1],12);				
			}
			cout<<"\n\t\t   Saved Successfully.";
			cout<<"\n\t===============================================\n\n\t\t";
			system("pause");
			system("cls");
		} 
		void reName()
		{
			cout<<"\n\tEnter your new/correct name : ";
			fflush(stdin);
			cin.getline(name,20);			
		}
		int showNumber()
		{
			cout<<"\t"<<name<<"\t"<<number[0]<<"    "<<number[1]<<endl<<endl;
			return 1;
		}
		char* retur1()		{	return name;	}
		char* retur2()		{	return number[0];	}
		char* retur3()		{	return number[1];	}
		void ending()
		{
			system("cls");
	    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
			cout<<"\n\n\tProgrammer :   Satyam Singh\n\t\t    BCA (II-nd Semester)\n\t\t    SGRR UNIVERSITY\n";
			cout<<"\n\t\t    Date : 09-07-2020";
	    	cout<<"\n\n<------------------------------------------------------------------>\n\n";
			exit(0);
		}			
};
int main()
{
	int choice;
	bool GameOver=true;	
	ContactBook C1;
	C1.entryPage();
	while(GameOver)
	{
		cout<<"\n\n\t\t\t  Main Menu\n";
		cout<<"\n\t===============================================\n";
		cout<<"\n\t1.Add New Contact\n\n\t2.Show Contact List\n\n\t3.Search Contact\n\n\t4.Rename Contact\n\n\t5.Delete Contact\n\n\t6.Delete All Contacts\n\n\t7.Exit\n\n\n\tEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:	createList(); break;	
			case 2: showContactList(); break;
			case 3:	searchContact();	break;
			case 4: renameContact();	break;
			case 5: deleteContact();	break;
			case 6: deleteContactList();	break;
			case 7:	GameOver=0; break;	
			default : cout<<"\n\tWrong Choice";	break;		
		};
	}
	cout<<"\n\t===============================================\n\n\t";
	system("pause");
	system("cls");	
	C1.ending();
}
void createList()
{
	ContactBook C1;
	ofstream outfile;
	outfile.open("Contact.dat",ios::binary|ios::app);
	if(!outfile)
	{
		cout<<"\tFile could not be open !! Press any Key...";
		getch();
		return;
	}
	C1.getNumber();
	outfile.write((char *) &C1, sizeof(ContactBook));
	outfile.close();
}
void showContactList()
{
	system("cls");
	ContactBook C1;
	ifstream inFile;
	inFile.open("Contact.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\tFile could not be open !! Press any Key...";
		getch();
		return;
	}
	cout<<"\n\n\t\t\tCONTACT LIST\n";
	cout<<"\n\t===============================================\n";
	cout<<"\n\n\tNames\t\tNumber 1      Number 2\n\n";
	int p=0;
	while(inFile.read((char *) &C1, sizeof(ContactBook)))
	{	p=C1.showNumber();	}
	inFile.close();
	if(p!=1)
		cout<<"\n\t\t\tEmpty Record\n";
	cout<<"\n\t===============================================\n\n\t\t";
	system("pause");
	system("cls");
}
void searchContact()
{
	system("cls");
	int p=0;
	int choice;
	char temp[20];
	ContactBook C1;
	ifstream inFile;
	inFile.open("Contact.dat",ios::binary);
	cout<<"\n\t===============================================\n";
	cout<<"\n\n\t1.Search by Name\n\n\t2.Search by Number\n\n\tEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1: {
			cout<<"\n\n\tEnter name : ";
			fflush(stdin);
			cin.getline(temp,20);			
			while(inFile.read((char *) &C1, sizeof(ContactBook)))
			{
				if(!strcmp(temp,C1.retur1()))
				{
					cout<<"\n\n\tNames\t\tNumber 1      Number 2\n\n";
					p=C1.showNumber();			
				}
			}
			if(p!=1)
				cout<<"\n\t\t    Record Not Found!\n";			
			break;
		}
		case 2: 
		{
			cout<<"\n\n\tEnter number : ";
			fflush(stdin);
			cin.getline(temp,20);						
			while(inFile.read((char *) &C1, sizeof(ContactBook)))
			{
				if(!strcmp(temp,C1.retur2()))
				{
					cout<<"\n\n\tNames\t\tNumber 1      Number 2\n\n";
					p=C1.showNumber();	
				}
				if(!strcmp(temp,C1.retur3()))
				{
					cout<<"\n\n\tNames\t\tNumber 1      Number 2\n\n";
					p=C1.showNumber();
				}
			}
			if(p!=1)
				cout<<"\n\t\t    Record Not Found!\n";
			break;
		}
		default : 	cout<<"Wrong choice";	break;
	};
	inFile.close();
	cout<<"\n\t===============================================\n\n\t\t";
	system("pause");
	system("cls");
}
void renameContact()
{
	system("cls");
	int p=0;
	char temp[20];
	ContactBook C1;
	ifstream inFile;
	inFile.open("Contact.dat",ios::binary);
	cout<<"\n\t===============================================\n";
	cout<<"\n\n\tEnter name : ";
	fflush(stdin);
	cin.getline(temp,20);			
	ofstream outFile;
	outFile.open("temp.dat",ios::binary|ios::out);
	while(inFile.read((char *) &C1, sizeof(ContactBook)))
	{
		if(!strcmp(temp,C1.retur1()))
		{
			C1.reName();
			p=1;
			outFile.write((char *) &C1, sizeof(ContactBook));						
		}
		else
			outFile.write((char *) &C1, sizeof(ContactBook));			
	}
	if(p!=1)
		cout<<"\n\t\tRecord Not Found!\n";
	else			
		cout<<"\n\n\t\t\tRenamed Successfully  \n";
	inFile.close();
	outFile.close();
	cout<<"\n\t===============================================\n\n\t\t";
	system("pause");
	system("cls");
	remove("Contact.dat");
	rename("temp.dat","Contact.dat");
}
void deleteContact()
{
	int p=0;
	char temp[20];
	system("cls");
	ContactBook C1;
	ifstream inFile;
	inFile.open("Contact.dat",ios::binary);
	ofstream outFile;
	outFile.open("temp.dat",ios::binary|ios::out);
	cout<<"\n\n\t\t\tDELETE CONTACT\n";
	cout<<"\n\t===============================================\n";
	cout<<"\n\n\tEnter name : ";
	fflush(stdin);
	cin.getline(temp,20);			
	while(inFile.read((char *) &C1, sizeof(ContactBook)))
	{
		if(!strcmp(temp,C1.retur1()))
			p=1;
		else
			outFile.write((char *) &C1, sizeof(ContactBook));			
	}
	inFile.close();
	outFile.close();
	if(p!=1)
		cout<<"\n\t\t  Record Not Found!\n";
	else
		cout<<"\n\t\tDelete Contact Successfully\n";
	cout<<"\n\t===============================================\n\n\t\t";
	system("pause");
	system("cls");
	remove("Contact.dat");
	rename("temp.dat","Contact.dat");	
}
void deleteContactList()
{
	system("cls");
	ContactBook C1;
	ofstream outFile;
	cout<<"\n\t===============================================\n";
	outFile.open("Contact.dat",ios::binary|ios::out);
	if(!outFile)
	{
		cout<<"\tFile could not be open !! Press any Key...";
		getch();
		return;
	}
	outFile.close();
	cout<<"\n\n\t\tContact List Deleted Successfully  \n";
	cout<<"\n\t===============================================\n\n\t";
	system("pause");
	system("cls");	
}
