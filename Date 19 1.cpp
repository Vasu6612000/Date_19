#include<iostream>
#include<string.h>
using namespace  std;

class Student
{
	public:
	int id;
	char name[100];
	int std;
	char school[100];
	int  num;	
};

int main()
{
	Student s;
	s.id =1;
	strcpy(s.name,"Raj");
	s.std=10;
    strcpy(s.school," Ashadeep School");
    s.num=9726488691;
    
    cout<<"student id ="<<s.id<<endl
        <<"student name ="<<s.name<<endl
        <<"student std  ="<<s.std<<endl
        <<"student school ="<<s.school<<endl
        <<"stundnt  num  ="<<s.num<<endl;
        
        return 0;
}
