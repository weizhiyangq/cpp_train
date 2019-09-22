#include "Animal.h"  //用引号和<>引入头文件的区别在于：""从当前目录开始查找,当找不到再去系统路径查找， <>从系统路径开始查找 
#include<iostream>
using namespace std;

//构造函数 
Animal::Animal()
{
}

Animal::Animal(int height,int weight)
{
}




//其他成员函数 
int Animal::eat()
{
	cout<<"animal eat"<<endl;
}

int Animal::sleep()
{
	cout<<"animal sleep"<<endl;
}

int Animal::breathe()
{
	cout<<"animal breathe"<<endl;
}




