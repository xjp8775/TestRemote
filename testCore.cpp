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

vector<ServerInfoItem>  g_vectServers;
bool FincExistServer(int serverId)
{
    vector<ServerInfoItem>::iterator iterId = g_vectServers.find(serverId);
    return iterId == g_vectServers.end() ? false : true;
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


	Person * p = 0;
	p->age = 45;
	
 return 0;
} 