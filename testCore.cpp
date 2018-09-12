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

void TestSecondBranch()
{
    vector<ServerInfoItem> vectItems;

}

int checkNum()
{
	return 3；
}

void Test0912Func()
{
	int aaa = 0;
	 //Test APP client
	int kkk = 90;
	int jj = aaa +kkk;
	return;
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
	int vari0607 = 50;
	
	//0912 3 rd
	int dd = 0；
	
	
 return 0;
 
} 