#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

namespace A
{
	int x = 18;
}
namespace B
{
	int x = 16;
	void f1()
	{
		cout<<"here is b sapce"<<endl;
	}
	void f2()
	{
		cout<<"this fun in b space"<<endl;
	}
}

/* 
void f2()
{
	cout<<"this fun "<<endl;
}
*/ 
	
using namespace B;  //ʹ�����ʱ�����ûָ�������ռ䣬�Զ�ȥB���� 
int main() {
	cout<<"hello"<<endl;
	cout<<A::x<<endl;
	B::f1();
	f2();
	return 0;
}
