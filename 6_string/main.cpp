#include <iostream>
//#include <string>
using namespace std;

/*
string�еĳ�������
s.empty() ��sΪ�մ�������true�����򷵻�false
s.size()  ����s���ַ��ĸ���
s[n] ����s��λ��Ϊn���ַ���λ�ô�0��ʼ
s1+s2 �����������ӳ��´��������´���ע�� "hello"+s2��"hello"+s2+"world" ���ǺϷ��ģ�����"hello"+"world"�ǲ��Ϸ��� 
s1=s2 ��s1�������滻Ϊs2�ĸ���
v1 == v2 �ж���ȣ�����true����false
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
	cout<<"your name length is "<<name.size()<<endl; //ע�� �ַ�����intֱ����+���ӻ��ӡ�е����� 
	cout<<"your name first letter is: "<<name[0]<<endl;
	return 0;
	
}
