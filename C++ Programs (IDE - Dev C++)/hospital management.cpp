#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <unistd.h>
#include <windows.h>
using namespace std;

HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE );

void admitPatient();
void deletePatient();
void searchPatient();
void listOFPatients();
void addDoctor();
void deleteDoctor();
void searchDoctor();
void listOfDoctor();

int c=0;
char temp[20];

void gotoxy(int x,int y)
{
	COORD C;
	C.X=x;
	C.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);
}
void drawLine(char sym,int time)
{
	cout<<"\n    ";
	for(int i=0; i<time; i++)
		cout<<sym<<"";
	cout<<"\n\n\t";
}
void line(int l)
{
	char ch=(char)205;
	for(int i=0; i<l; i++)
	cout<<ch;
}
void mainMenuBox(int n)
{
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	gotoxy(4,1);
	cout<<(char)201;line(n);cout<<(char)187;
	for(int i=2; i<=4; i++)
	{
		if(n==51)
		{
			gotoxy(4,i);
			cout<<(char)186<<"\t\t\t\t\t\t\t"<<(char)186;							
		}
		else
		{
			gotoxy(4,i);
			cout<<(char)186<<"\t\t\t\t\t\t\t\t\t\t\t\t    "<<(char)186;										
		}
	}
	gotoxy(4,5);
	cout<<(char)200;line(n);cout<<(char)188;
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
}

class Hospital 
{
	private :
		char ch;	
		int choice,Id,age,weight,age2,Ward;
		char gender,gender2,name[20],disease[50],pDoctor[20],name2[20],special[30],Id2[10];
	public :
		void entryBox()
		{
			gotoxy(1,1);
			cout<<(char)201;line(62);cout<<(char)187;
			for(int i=2; i<=18; i++)
			{
				gotoxy(1,i);
				cout<<(char)186<<"\t\t\t\t\t\t\t\t"<<(char)186;				
			}
			gotoxy(1,18);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\t\t\t\t Press any key to continue . . .";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			gotoxy(1,19);
			cout<<(char)200;line(62);cout<<(char)188;		
		}
		void endingBox()
		{
			gotoxy(3,1);
			cout<<(char)201;line(60);cout<<(char)187;
			for(int i=2; i<=15; i++)
			{
				gotoxy(3,i);
				cout<<(char)186<<"\t\t\t\t\t\t\t\t"<<(char)186;				
			}
			gotoxy(3,15);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\t\t\t\t Press any key to continue . . .";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			gotoxy(3,16);
			cout<<(char)200;line(60);cout<<(char)188;
		}
		void entryPage()
		{
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			system("cls");
			cout<<"\n\n\n\n\n\t"<<(char)201;
			line(47);
			cout<<(char)187<<endl;
			cout<<"\t"<<(char)186<<"\t\t\t\t\t\t"<<(char)186<<endl;
			cout<<"\t"<<(char)186<<"\t\t\t\t\t\t"<<(char)186<<endl;
			cout<<"\t"<<(char)186;
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\t\t H_O_S_P_I_T_A_L		";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<(char)186<<endl;
			cout<<"\t"<<(char)186<<"\t\t\t\t\t\t"<<(char)186<<endl;
			cout<<"\t"<<(char)186;
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\t       M_A_N_A_G_E_M_E_N_T		";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<(char)186<<endl;
			cout<<"\t"<<(char)186<<"\t\t\t\t\t\t"<<(char)186<<endl;
			cout<<"\t"<<(char)186;
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\t\t   S_Y_S_T_E_M			";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<(char)186<<endl;
			cout<<"\t"<<(char)186<<"\t\t\t\t\t\t"<<(char)186<<endl;
			cout<<"\t"<<(char)186<<"\t\t\t\t\t\t"<<(char)186<<endl;
			cout<<"\t"<<(char)200;
			line(47);
			cout<<(char)188<<endl;
			entryBox();
			getch();
		}	
		void mainMenu()
		{
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			while(1)
			{
				system("cls");
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				drawLine('=',40);
				cout<<"\t	MAIN MENU\n";
				mainMenuBox(51);
				cout<<"\n\n\tA. For Patient Entry/Information\n\n\tB. For Doctor Entry/Information";
				SetConsoleTextAttribute(h,8|FOREGROUND_INTENSITY);
				cout<<"\n\n\n\t   0 >> Exit\t9 >> Back\n";
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				cout<<"\n\n\tEnter your choice :: ";
				SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
				cin>>ch;
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				switch(ch)
				{
					case 'A':	patient();		break;
					case 'B':	doctor();		break;
					case '0':	ending();		break;
					case '9':	entryPage();	break;
					default :	cout<<"\n\n\t\tWRONG CHOICE!!";	break;
				};
			}
		}
		void patient()
		{
			while(1)
			{
				system("cls");
				cout<<"\n\t\tWelcome to our Hospital...\n";
				drawLine('=',55);
				cout<<"\n\t1. Admit A New Patient\n\n\t2. View Patient List \n\n\t3. Search any Patient Record\n\n\t4. Delete Patient Record";
				SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);
				cout<<"\n\n\n\t   0 >> Exit\t9 >> Back\n";
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				cout<<"\n\n\tEnter your choice :: ";
				SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
				cin>>choice;
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				switch(choice)
				{
					case 1: admitPatient();		break;
					case 2: listOFPatients();	break;
					case 3: searchPatient();	break;
					case 4: deletePatient();	break;
					case 0: ending();	 break;
					case 9: mainMenu();	break;
					default : cout<<"\tWrong choice ";
				};
			}
		}
		void getPatientInfo()
		{
			cout<<"\n\tEnter Ward No.	     : ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>Ward;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Patient Id No. : ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>Id;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Patient Name   : ";
			fflush(stdin);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin.getline(name,20);
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Patient Age.   : ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>age;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Patient Weight : ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>weight;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Patient Gender : ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>gender;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Your Doctor Name   : ";
			fflush(stdin);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin.getline(pDoctor,20);
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Patient Disease/Problem : ";
			fflush(stdin);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin.getline(disease,50);
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		}
		int showPatientList()
		{
			cout<<"\n\t"<<Ward<<"\t"<<Id<<"\t"<<name<<"\t"<<age<<"\t"<<weight<<"\t"<<gender<<"\t"<<pDoctor<<"\t"<<disease<<endl;
			return 1;
		}
		char* findPatientRecord()	{	return name;	}		
		void doctor()
		{
			while(1)
			{
				system("cls");
				SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
				cout<<"\n\t\tWelcome to our Hospital...\n";
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				drawLine('=',55);
				cout<<"\n\t1. Add A New Doctor\n\n\t2. View Doctor List \n\n\t3. Search any Doctor Record\n\n\t4. Delete Doctor Record";
				SetConsoleTextAttribute(h,2|FOREGROUND_INTENSITY);
				cout<<"\n\n\n\t   0 >> Exit\t9 >> Back\n";
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				cout<<"\n\n\tEnter your choice :: ";
				SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
				cin>>choice;
				SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				switch(choice)
				{
					case 1: addDoctor();   	break;
					case 2: listOfDoctor();	break;
					case 3: searchDoctor();	break;
					case 4: deleteDoctor();	break;
					case 0:	ending();	 	break;
					case 9: mainMenu();	break;
					default : cout<<"\tWrong choice ";
				};
			}		
		}
		void getDoctorInfo()
		{
			cout<<"\n\tEnter Serial No. : ";
			fflush(stdin);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin.getline(Id2,20);
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Name   : ";
			fflush(stdin);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin.getline(name2,20);
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Age.   : ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>age2;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter Gender : ";
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin>>gender2;
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			cout<<"\n\tEnter specialisation : ";
			fflush(stdin);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cin.getline(special,50);
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		}
		int showDoctorList()
		{
			cout<<"\n\t"<<Id2<<"\t\t"<<name2<<"\t"<<age2<<"\t";
			if(gender2=='M')
				cout<<gender2<<"ALE\t\t"<<special<<endl;			
			else
				cout<<gender2<<"EMALE\t\t"<<special<<endl;			
			return 1;
		}
		char* findDoctorRecord()	{	return name2;	}
		void ending()
		{
			system("cls");
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\n\n\n\n\n\t\tProgrammer :   Satyam Singh\n\t\t\t    BCA (II-nd Semester)\n\t\t\t    SGRR UNIVERSITY\n";
			cout<<"\n\t\t\tDate : 21-07-2020\n\n";
			cout<<"\t\t\t Day : Tuesday\n\n";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			endingBox();
			getch();
			exit(0);
		}
};
int main()
{
	Hospital H1;
	H1.entryPage();
	H1.mainMenu();
	return 0;
}
void admitPatient()
{
	system("cls");
	drawLine('=',40);
	cout<<"\t   Admit A New Patient\n";
	mainMenuBox(51);
	cout<<endl;
	ofstream file;
	Hospital H1;
	file.open("patient.dat",ios::binary|ios::app);
	H1.getPatientInfo();
	file.write((char *) &H1, sizeof(Hospital));
	file.close();
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<"\n\n\tPatient Details Saved Successfully\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	drawLine('=',55);
	system("pause");
}
void listOFPatients()
{
	system("cls");
	drawLine('=',95);
	cout<<"\t\t\t    Patient-List\n";
	mainMenuBox(95);
	cout<<endl;
	ifstream file;
	Hospital H1;
	file.open("patient.dat",ios::binary|ios::in);
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<"\n\tWard No.  ID\tName\t\tAge\tWeight\tGender\tDr. Name\tDisease/Problem\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	c=0;
	while(file.read((char*) &H1, sizeof(Hospital)))
	{
		c=H1.showPatientList();
	}
	if(c==0)
	{
		SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\n\t\t     Record Empty!!..";
		SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	}
	file.close();
	drawLine('=',95);
	system("pause");
}
void searchPatient()
{
	c=0;
	system("cls");
	drawLine('=',95);
	cout<<"\t\t\t  Search Patient Record List\n";
	mainMenuBox(95);
	cout<<endl;
	ifstream file;
	Hospital H1;
	file.open("patient.dat",ios::binary|ios::in);
	cout<<"\n\tEnter Patient Name : ";
	fflush(stdin);
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cin.getline(temp,20);
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	while(file.read((char*) &H1, sizeof(Hospital)))
	{
		if(!strcmp(temp,H1.findPatientRecord()))
		{
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\n\tWard No.  ID\tName\t\tAge\tWeight\tGender\tDr. Name\tDisease/Problem\n";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			H1.showPatientList();
			c=1;
		}
	}
	if(c==0)
	{
		SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\n\n\t\t\t     Record not found!!..";
		SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	}
	file.close();
	drawLine('=',95);
	system("pause");
} 
void deletePatient()
{
	c=0;
	system("cls");
	drawLine('=',40);
	cout<<"\t    Delete Patient Record\n";
	mainMenuBox(51);
	cout<<endl;
	ifstream file;
	ofstream file2;
	Hospital H1;
	file.open("patient.dat",ios::binary|ios::in);
	file2.open("temp1.dat",ios::binary|ios::out);
	cout<<"\n\tEnter Patient Name : ";
	fflush(stdin);
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cin.getline(temp,20);
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);

	while(file.read((char*) &H1, sizeof(Hospital)))
	{
		if(!strcmp(temp,H1.findPatientRecord()))
		{
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\n\n\t    Record Deleted Successfully...\n";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			c=1;
		}
		else
			file2.write((char *) &H1,sizeof(Hospital));
	}
	if(c==0)
	{
		SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\n\t\t\tRecord not found!!..";
		SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	}
	file.close();
	file2.close();
	remove("patient.dat");
	rename("temp1.dat","patient.dat");
	drawLine('=',50);
	system("pause");
} 

void addDoctor()
{
	system("cls");
	drawLine('=',40);
	cout<<"\t    Add A New Doctor\n";	
	mainMenuBox(51);
	ofstream file;
	Hospital H1;
	cout<<endl;
	file.open("doctor.dat",ios::binary|ios::app);
	H1.getDoctorInfo();
	file.write((char *) &H1, sizeof(Hospital));
	file.close();
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<"\n\n\tDoctor Details Saved Successfully\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	drawLine('=',50);
	system("pause");
	
}
void listOfDoctor()
{
	c=0;
	system("cls");
	drawLine('=',35);
	cout<<"\t\t\t     Doctor-List\n";
	mainMenuBox(95);
	ifstream file;
	Hospital H1;
	file.open("doctor.dat",ios::binary|ios::in);
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<"\n\tSerial No.\tName\t\t\tAge\tGender\t\tSpecialist\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cout<<endl;
	while(file.read((char*) &H1, sizeof(Hospital)))
	{	c=H1.showDoctorList();	}
	if(c==0)
	{
		SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\n\n\t\t\t     Record Empty!!..";
		SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	}
	file.close();
	drawLine('=',95);
	system("pause");
}
void searchDoctor()
{
	c=0;
	system("cls");
	drawLine('=',40);
	cout<<"\t\t\t  Search Doctor Record List\n";
	mainMenuBox(95);
	ifstream file;
	Hospital H1;
	file.open("doctor.dat",ios::binary|ios::in);
	cout<<"\n\n\tEnter Doctor Name : ";
	fflush(stdin);
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cin.getline(temp,20);
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	while(file.read((char*) &H1, sizeof(Hospital)))
	{
		if(!strcmp(temp,H1.findDoctorRecord()))
		{
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\n\tSerial No.\tName\t\t\tAge\tGender\t\tSpecialist\n";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			H1.showDoctorList();
			c=1;
		}
	}
	if(c==0)
	{
		SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\n\t\t\t     Record not found!!..";
		SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	}
	file.close();
	drawLine('=',95);
	system("pause");
}
void deleteDoctor()
{
	c=0;
	system("cls");
	drawLine('=',40);
	cout<<"\t    Delete Doctor Record\n";
	mainMenuBox(51);
	ifstream file;
	ofstream file2;
	Hospital H1;
	file.open("doctor.dat",ios::binary|ios::in);
	file2.open("temp2.dat",ios::binary|ios::out);
	cout<<"\n\n\tEnter Doctor Name : ";
	fflush(stdin);
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
	cin.getline(temp,20);
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	while(file.read((char*) &H1, sizeof(Hospital)))
	{
		if(!strcmp(temp,H1.findDoctorRecord()))
		{
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"\n\n\t    Record Deleted Successfully...\n";
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			c=1;
		}
		else
			file2.write((char *) &H1,sizeof(Hospital));
	}
	if(c==0)
	{
		SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\n\t\t\tRecord not found!!..";
		SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	}
	file.close();
	file2.close();
	remove("doctor.dat");
	rename("temp2.dat","doctor.dat");
	drawLine('=',50);
	system("pause");	
}
