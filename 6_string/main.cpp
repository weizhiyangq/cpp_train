#include <iostream>
//#include <string>
using namespace std;

/*
string中的常见操作
s.empty() 若s为空串，返回true，否则返回false
s.size()  返回s中字符的个数
s[n] 返回s中位置为n的字符，位置从0开始
s1+s2 将两个串连接成新串，返回新串。注意 "hello"+s2和"hello"+s2+"world" 都是合法的，但是"hello"+"world"是不合法的 
s1=s2 把s1的内容替换为s2的副本
v1 == v2 判定相等，返回true或者false
v1 != v2 
*/
/* 
int main()
{
	string name = "weizhi";
	string hobby("football");
	string ss(5,'c');
	cout<<name<<hobby<<ss<<endl;
	return 0;
}
*/ 


int main(void)
{
	string name;
	cout<<"please input your name"<<endl;
	getline(cin,name);
	if(name.empty())
	{
		cout<<"input is null.."<<endl;
		return 0;
	}
	if(name == "minister")
	{
		cout<<"you are administrator"<<endl;
		
	}
	cout<<"hell "+name<<endl;
	cout<<"your name length is "<<name.size()<<endl; //注意 字符串和int直接用+连接会打印有点问题 
	cout<<"your name first letter is: "<<name[0]<<endl;
	return 0;
	
}
