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
	cout<<"������һ������:"<<endl;
	int x = 0;
	cin>>x;
	cout<<oct<<x<<endl;  //oct��ʾ8���� 
	cout<<dec<<x<<endl;  //dec��ʾ10���ƣ����Բ�д 
	cout<<hex<<x<<endl;  //hex��16���� 

	cout<<"������һ������ֵ0/1"<<endl;
	bool y = false ;
	cin>>y;
	cout<<boolalpha<<y<<endl;
	
	return 0;
}






