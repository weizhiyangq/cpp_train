#include <iostream>
#include<string>
using namespace std;
/*
//实例1 
class Student
{
	public:
		void setAge(int _age)
		{
			if(_age>0&&age<150)
			{
				age = _age;
			}
			else
			{
				cout<<"your input error"<<endl;
			}
		}
		int getAge()
		{
			return age;
		}
	private:
		string name;
		int age;
};
int main()
{
	Student stu1;
	stu1.setAge(20);
	cout<<stu1.getAge()<<endl;
	
}
*/
class Student
{
	public:
		Student()
		{
		 m_score = 0;	
		}
		void setName(string _name)
		{
			m_strName = _name;
		}
		string getName()
		{
			return m_strName;
		}
		void setGender(string _gender)
		{
			m_strGender = _gender;
		}
		string getGender()
		{
			return m_strGender;
		}
		int getScore()
		{
			return m_score;
		}
		void initScore()
		{
			m_score = 0;
		}
		void study(int _score)
		{
			m_score += _score;
		}
	private:
		string m_strName;
		string m_strGender;
		int m_score;
		
	
};
int main()
{
	Student stu;
	//stu.initScore(); //当构造函数里面定义相应变量后，就不需要这个了 
	stu.setName("zhi");
	stu.setGender("male");
	stu.study(10);
	stu.study(30);
	
	cout<<stu.getName()<<" "<<stu.getGender()<<" "<<stu.getScore()<<endl;
	return 0;
}














