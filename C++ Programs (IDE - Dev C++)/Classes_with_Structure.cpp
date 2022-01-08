//Program to store the detail of students (such as name, rollno, age, phonenno) and 
//show in a tabular form by using the concept of structure, Classes, file & streams.(Classes_with_Structure)
#include <iostream>
#include <fstream>
using namespace std;
class Student 
{
	private :
		int n;
		struct node
		{
			char name[15],phone[15],Id[15],age[5];
		}var[5];
	public :
		Student(int j)
		{
			n=j;
		}
		void getdata()
		{
			for(int i=0; i<n; i++)
			{
				cout<<"Student no ."<<i+1<<endl;
				cout<<"Enter Name :";
				fflush(stdin);
				cin.getline(var[i].name,15);
				cout<<"Enter Age :";
				fflush(stdin);
				cin.getline(var[i].age,5);
				cout<<"Enter Id :";
				fflush(stdin);
				cin.getline(var[i].Id,15);
				cout<<"Enter Phone No. :";
				cin.getline(var[i].phone,15);
			}
		}
		void display()
		{
			fstream file;
			file.open("Student.txt",ios::out);
			
			cout<<"S No.\tName\t\tID\t\tAge\tPhone No.\n";
			file<<"S No.\tName\t\tID\t\tAge\tPhone No.\n";
			for(int i=0; i<n ;i++)
			{
				cout<<i+1<<"\t"<<var[i].name<<"\t"<<var[i].Id<<"\t"<<var[i].age<<"\t"<<var[i].phone<<endl;
				file<<i+1<<"\t"<<var[i].name<<"\t"<<var[i].Id<<"\t"<<var[i].age<<"\t"<<var[i].phone<<endl;
			}
			file.close();
			cout<<"Data From The File.\n";
			
			file.open("Student.txt",ios::in);
			char ch;
			while(file.eof()==0)
			{
				ch=file.get();
				cout<<ch;
			}
			file.close();
			
		}
};
int main()
{
	int num;
	cout<<"\n\tStruture With classes\n";
	cout<<"\nEnter the no of student in a list :";
	cin>>num;
	Student obj(num);
	obj.getdata();
	obj.display();
	return 0;
}
