#include<iostream>
#include<string.h>
using namespace  std;

class enpolyee
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
	enpolyee s;
	s.id =1;
	strcpy(s.name,"Raj");
	s.std=10;
    strcpy(s.school," Ashadeep School");
    s.num=9726488691;
    
    cout<<"enpolyee id ="<<s.id<<endl
        <<"enpolyee name ="<<s.name<<endl
        <<"enpolyee std  ="<<s.std<<endl
        <<"enpolyee school ="<<s.school<<endl
        <<"enpolyee  num  ="<<s.num<<endl;
        
        return 0;
}
