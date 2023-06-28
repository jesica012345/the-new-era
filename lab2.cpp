#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public :
	int id;
	char name[100];
	int age;
};
int main()
{
	Student S1,S2;
	cout<<"Enter student's ID:-";
	cin>>S1.id;
	cout<<"Enter Student's NAME:-";
	cin>>S1.name;
	cout<<"Enter Student's AGE:-";
	cin>>S1.age;
	
	cout<<"Enter student's ID:-";
	cin>>S2.id;
	cout<<"Enter Student's NAME:-";
	cin>>S2.name;
	cout<<"Enter Student's AGE:-";
	cin>>S2.age;
	
	cout<<"Student's ID:-"<<S1.id<<endl;
	cout<<"Student's NAME:-"<<S1.name<<endl;
	cout<<"Student's AGE:-"<<S1.age<<endl<<endl;
	
	cout<<"Student's ID:-"<<S2.id<<endl;
	cout<<"Student's NAME:-"<<S2.name<<endl;
	cout<<"Student's AGE:-"<<S2.age<<endl<<endl;
	
	
}

