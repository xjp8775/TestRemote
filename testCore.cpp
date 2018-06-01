#include <stdio.h>  
#include<iostream>
using namespace std;

class Person
{
	public:
	int age;
	int salary;
	
};

struct ServerInfoItem
{
    int   _id;
    char  _name[50];
};

int main()  
{  
   // char *ptr="linuxers.cn";  
    //*ptr=0;  
	
    int kk = 0;
    cout << "This is a test file" << endl;
        
    ServerInfoItem server1;

	Person * p = 0;
	p->age = 45;
	
 return 0;
} 