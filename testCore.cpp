#include <stdio.h>  
#include<iostream>
#include <vector>
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


void TestSecondBranch()
{
    vector<ServerInfoItem> vectItems;

}

int main()  
{  
   // char *ptr="linuxers.cn";  
    //*ptr=0;  
	
    int kk = 0;
    cout << "This is a test file" << endl;
        
    ServerInfoItem server1;
    ServerInfoItem server2;
    server2._id = 999;

    //this is a second branch
    

	Person * p = 0;
	p->age = 45;
	
 return 0;
} 