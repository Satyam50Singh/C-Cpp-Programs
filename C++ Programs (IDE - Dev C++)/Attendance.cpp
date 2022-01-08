//Attendance Management System
/*
CREATE A CLASS
-->CLASS NAME
--> CLASS TEACHER NAME
 
OPEN A CLASS
-->ENTER CLASS NAME 
* ADD STUDENT 
* REMOVE STUDENT
* VIEW STUDENT LIST
* TAKING ATTENDANCE
-->ENTER TEACHER NAME
-->ENTER DATE 

DELETE A CLASS

VIEW CLASS LIST
*/
#include <string.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void createClass();
void openClass();
void listOfClass();
void removeClass();
void addStudent(char* );
void studentOfList(char*);
void removeStudent(char *);
void presentAbsent(char*);
void viewAttendanceRecord();
void clearAttendanceRecord();
int check=0;
void drawLine(char sym,int time)
{
	cout<<"\n    ";
	for(int i=0; i<time; i++)
		cout<<sym<<"";
	cout<<"\n\n\t";
}

class Attendance
{
	private :
		fstream file;
		int choice,rollNo;
		char ch;
		char clName[15],clTeacherName[30],str[10],temp[20],stName[25];
	public :
		void entryPage()
		{			
			system("cls");
			cout<<endl;
			drawLine('=',55);	
			cout<<"\n\n\n\t\t\t    SCHOOL";
			cout<<"\n\n\n\t\t    ATTENDANCE MANAGEMENT";
			cout<<"\n\n\n\t\t\t    SYSTEM\n\n\n";
			drawLine('=',55);
			system("pause");
		}
		void ending()
		{
			system("cls");
			drawLine('-',60);	
			cout<<"\n\n\t\tProgrammer :   Satyam Singh\n\t\t\t    BCA (II-nd Semester)\n\t\t\t    SGRR UNIVERSITY\n";
			cout<<"\n\t\t\tDate : 15-07-2020\n\n";
			cout<<"\t\t\tDay : Wednesday\n\n";
			drawLine('-',60);	
			exit(0);
		}			
		void mainMenu()
		{
			while(1)
			{
				system("color 1F");
				system("cls");
				drawLine('=',44);
				cout<<"\t    MAIN MENU\n";
				drawLine('=',44);
				cout<<"\n\t1. Create a new Class\n\n\t2. View Class List\n\n\t3. Open a Class\n\n\t4. Remove a Class\n\n\t5. Exit\n\n\tEnter your choice :: ";
				cin>>choice;
				switch(choice)
				{
					case 1: createClass(); 	break;
					case 2: listOfClass(); 	break;
					case 3: openClass(); 	break;
					case 4: removeClass(); 	break;
					case 5:	ending();	break;
					default : cout<<"\n\n\t\tWrong choice";
				};					
			}
		}
		void classForm()
		{
			cout<<"\n\n\tEnter Class Teacher Name : ";
			fflush(stdin);			
			cin.getline(clTeacherName,30);
			cout<<"\n\n\tEnter class name : ";
			fflush(stdin);
			cin.getline(clName,11);
			strcpy(temp,clName);
			cout<<"\n\n\tAre You Sure (Y/N) ::";
			cin>>ch;
			
			if(ch=='Y' || ch=='y')
			{
			strcpy(temp,clName);
				char str[]=".dat";
				strcat(temp,str);
				file.open(temp,ios::binary|ios::out);
				if(!file)
				{
					cout<<"file doesn't create";
					getch();
					exit(0);
				}
				file.close();
				cout<<"\n\n\tClass created successfully!!\n";
				drawLine('=',44);
				system("pause");
			}
			else
				mainMenu();
		}
		int classList()
		{
			cout<<"\n\t"<<clName<<"\t    "<<clTeacherName<<endl;
			return 1;
		}
		char* retClassName()	{	return clName;	}	
		char* getStudentName()	{	return stName;	}	

		int studentForm()
		{
			cout<<"\n\n\tEnter Rollno : ";
			fflush(stdin);			
			cin>>rollNo;
			cout<<"\n\n\tEnter Student name : ";
			fflush(stdin);
			cin.getline(stName,25);			
			cout<<"\n\n\tAre You Sure (Y/N) ::";
			cin>>ch;
			if(ch=='Y' || ch=='y')
				return 1;
			else
				return 0;
		}
		int studentList()
		{
			cout<<"\n\t      "<<rollNo<<"\t          "<<stName<<endl;			
			return 1;
		}
		int studentAttendance(int s)
		{
			cout<<"\n\n\t   "<<s<<"     "<<stName<<"\t";			
			return 1;			
		}
};

int main()
{
	Attendance A1;
	A1.entryPage();
	A1.mainMenu();	
	return 0;
	
}

void createClass()
{
	system("cls");
	drawLine('=',44);
	cout<<"\n\t\t Create a New Class\n";
	drawLine('=',44);
	Attendance A1;
	ofstream outfile;
	outfile.open("School.dat",ios::binary | ios::app);
	A1.classForm();
	outfile.write((char *) &A1, sizeof(Attendance));
	outfile.close();
}
void openClass()
{
	int choice;
	char ch;
	char clName2[15],clTeacherName[30],temp[20];
		char temp2[20];
	int p=0;
	system("cls");
	drawLine('=',50);
	cout<<"\tOpen A Class By its Name \n";
	drawLine('=',50);
	cout<<"\n\n\tEnter class name : ";
	fflush(stdin);
	cin.getline(clName2,15);
	ifstream infile;
	infile.open("School.dat",ios::binary|ios::in);
	Attendance A1;	
	while(infile.read((char *)  &A1, sizeof(Attendance)))
	{
		if(!strcmp(clName2,A1.retClassName()))
		{
			cout<<"\n\n\tClass opened successfully!!\n";			
			drawLine('=',50);
			system("pause");
			p=1;		
		}
	}
	infile.close();
	
	if(p!=1)
	{
			cout<<"\n\n\t\tOops!! Class doesn't exist\n";			
			drawLine('=',50);
			system("pause");
	}
	else
	{
		strcpy(temp,clName2);
		char str[]=".dat";
		system("color 10");
		strcat(temp,str);
		while(1)
		{
			system("cls");
			drawLine('=',44);
			cout<<"\t   "<<clName2<<endl;
			drawLine('=',44);
			
			cout<<"\n\t    1. Add Student in a class\n\n\t    2. Remove Student\n\n\t    3. View Student List\n\n\t    4. Attendance Time\n\n\t    5. View Attendance Record\n\n\t    6. Clear Attendance Record\n\n\t0 :: Home Page\t\t9 :: Exit";
			cout<<"\n\n\tEnter Your Choice : ";
			cin>>choice;
			switch(choice)
			{
				case 1: addStudent(temp);	break;
				case 2: removeStudent(temp);	break;
				case 3: studentOfList(temp); 	break;
				case 4: presentAbsent(temp); 	break;
				case 5: viewAttendanceRecord();	break;
				case 6: clearAttendanceRecord();	break;
				case 0:	A1.mainMenu();	break;
				case 9:	A1.ending();	break;
				default : cout<<"\n\n\t\tWrong choice"; break;
			};				
		}
	}
}
void removeClass()
{
	char ch;
	char clName[20];
	char temp2[20];
	system("cls");
	drawLine('=',44);
	cout<<"\t\t   Remove Class \n";
	drawLine('=',44);
	cout<<"\n\n\tEnter class name : ";
	fflush(stdin);
	cin.getline(clName,11);
	cout<<"\n\n\tAre You Sure (Y/N) ::";
	cin>>ch;
	
	if(ch=='Y' || ch=='y')
	{
		ofstream outFile;
		ifstream infile;
		infile.open("School.dat",ios::binary | ios::in);		
		outFile.open("Sharma.dat",ios::binary | ios::out);
		Attendance A1;
		while(infile.read((char *) &A1, sizeof(Attendance)))
		{
			if(!strcmp(clName,A1.retClassName()))
			{
				cout<<"\n\t   Class Removed Successfully\n";
				check=1;
			}
			else
				outFile.write((char *) &A1, sizeof(Attendance));
		}
		infile.close();
		if(check!=1)
			cout<<"\n\n\tClass doesnot Exist!!\n";
		outFile.close();
		drawLine('=',44);
		system("pause");	
		remove("School.dat");
		rename("Sharma.dat","School.dat");
	}
	else
		return ;
}

void listOfClass()
{	
	system("cls");
	system("color 90");
	drawLine('=',44);
	cout<<"\n\t\t Class Names List \n";
	drawLine('=',44);
	cout<<"\n\tClass Name \tClass Teacher Name\n";
	ifstream infile;
	check=0;
	infile.open("School.dat",ios::binary | ios::in);
	Attendance A1;
	while(infile.read((char *) &A1, sizeof(Attendance)))
		check=A1.classList();
	infile.close();
	if(check!=1)
		cout<<"\n\n\t\tEmpty Record\n";
	drawLine('=',44);
	system("pause");	
}

void addStudent(char temp[])
{
	system("cls");
	drawLine('=',44);
	cout<<"\n\t\t Add a New Student\n";
	drawLine('=',44);
	Attendance A1;
	ofstream file;
	file.open(temp,ios::binary|ios::app);
	int	p=A1.studentForm();
	if(p==1)
	{
		file.write((char *) &A1, sizeof(Attendance));
		cout<<"\n\n\tStudent Added in List Successfully\n";
		drawLine('=',44);
		system("pause");
	}
	file.close();
}

void studentOfList(char temp[])
{
	system("cls");
	system("color 90");
	drawLine('=',44);
	cout<<"\t    Student Names List \n";
	drawLine('=',44);
	cout<<"\n\tRoll No.\tStudent's Names\n";
	ifstream infile;
	infile.open(temp,ios::binary | ios::in);
	Attendance A1;
	while(infile.read((char *) &A1, sizeof(Attendance)))
		check=A1.studentList();
	infile.close();
	if(check!=1)
		cout<<"\n\n\tEmpty Record\n";
	drawLine('=',44);
	system("pause");		
}

void removeStudent(char temp[])
{
	char ch;
	char stName[20];
	char temp2[20];
	strcpy(temp2,temp);
	system("cls");
	drawLine('=',44);
	cout<<"\n\t\t Remove Student From List \n";
	drawLine('=',44);
	cout<<"\n\n\tEnter Student name : ";
	fflush(stdin);
	cin.getline(stName,25);			
	cout<<"\n\n\tAre You Sure (Y/N) ::";
	cin>>ch;
	if(ch=='Y' || ch=='y')
	{
		ofstream outFile;
		ifstream infile;
		infile.open(temp,ios::binary | ios::in);
		outFile.open("tempary.dat",ios::binary | ios::out);
		Attendance A1;
		while(infile.read((char *) &A1, sizeof(Attendance)))
		{
			if(!strcmp(stName,A1.getStudentName()))
			{
				cout<<"\n\t     Student Removed Successfully\n";
				check=1;
			}
			else
				outFile.write((char *) &A1, sizeof(Attendance));
		}
		infile.close();
		if(check!=1)
			cout<<"\n\n\tStudent Record Not Found!\n";
		outFile.close();
		drawLine('=',44);
		system("pause");	
		remove(temp);
		rename("tempary.dat",temp2);
	}
	else
		return ;
}

void presentAbsent(char temp[])
{
	char val[10];
	int p=0,n=0;
	char date[15];
	system("cls");
	drawLine('=',64);
	cout<<"\t              Attendance \n";
	drawLine('=',64);
	ofstream File;
	File.open("PRESENT.txt",ios::app);
	if(!File)
	{
		cout<<"\n\tFile doesn't created!!";
		getch();
		exit(0);
	}	
	cout<<"\n\t    Enter Date :: ";
	cin>>date;
	File<<"\n\tDate  :: "<<date<<endl;
	File<<"\n\t--------------------------------\n";
	cout<<"\n\tS.No.    Student's Names\t    Present\tAbsent\n";
	ifstream infile;
	infile.open(temp,ios::binary | ios::in);
	Attendance A1;
	int s=1;
	check=0;
	while(infile.read((char *) &A1, sizeof(Attendance)))
	{
		
		check=A1.studentAttendance(s++);
		cout<<"\t    ";
		cin>>val;
		if(!strcmp(val,"PRESENT")||!strcmp(val,"Present")||!strcmp(val,"present"))
			++p;
		else if(!strcmp(val,"ABSENT")||!strcmp(val,"Absent")||!strcmp(val,"absent"))
			++n;
	}
	infile.close();
	if(check!=1)
		cout<<"\n\n\tEmpty Record\n";
	else
	{
		cout<<"\n\n\tTotal No. of Present Student : "<<p<<endl;
		cout<<"\n\tTotal No. of Absent Student : "<<n<<endl;
		File<<"\n\tTotal No. of Present Student : "<<p<<endl;
		File<<"\tTotal No. of Absent Student : "<<n<<endl;
		File.close();
	}
	drawLine('=',64);
	system("pause");		
}

void viewAttendanceRecord()
{
	system("cls");
	drawLine('=',44);
	cout<<"\tAttendance Record \n";
	drawLine('=',44);
	ifstream file;
	file.open("PRESENT.txt",ios::in);
	if(!file)
	{
		cout<<"\n\tFile doesn't created!!";
		getch();
		exit(0);
	}
		char ch;
	while(file.eof()==0)
	{
		file.get(ch);
		cout<<ch;
	}
	file.close();
	drawLine('=',44);
	system("pause");
}
void clearAttendanceRecord()
{
	system("cls");
	drawLine('=',44);
	cout<<"\tClear Attendance Record \n";
	drawLine('=',44);
	ofstream file;
	file.open("PRESENT.txt",ios::out);
	if(!file)
	{
		cout<<"\n\tFile doesn't created!!";
		getch();
		exit(0);
	}
	file.close();
	cout<<"\n\n\tRecord Clear SuccessFully...\n";
	drawLine('=',44);
	system("pause");
}
