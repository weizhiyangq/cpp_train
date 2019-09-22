#include <iostream>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
string cin_fun()
{   
    string x;
    
	cin>>x;
	return x;
}


int main() {
	string x;
	x = cin_fun();
	cout<<"x:"<<x<<endl;
	int y;
	float z;
	cin>>y>>z;
	cout<<"y:"<<y<<endl;
	cout<<"z:"<<z<<endl;
	return 0;
}
*/

int main(void)
{
	cout<<"请输入一个整数:"<<endl;
	int x = 0;
	cin>>x;
	cout<<oct<<x<<endl;  //oct表示8进制 
	cout<<dec<<x<<endl;  //dec表示10进制，可以不写 
	cout<<hex<<x<<endl;  //hex是16进制 

	cout<<"请输入一个布尔值0/1"<<endl;
	bool y = false ;
	cin>>y;
	cout<<boolalpha<<y<<endl;
	
	return 0;
}






