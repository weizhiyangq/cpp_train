#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
public:������������������
protected�����Ա�������ʣ������ܱ��ⲿ����
private��������ⲿ�����ܷ��� 
*/
class Animal
{
	public:
		Animal(int height,int weight) 
		{
			//cout<<"animal construct"<<endl;
		}
		~Animal()
		{
			//cout<<"animal deconstruct"<<endl;
		}
		void eat()
		{
			cout<<"animal eat"<<endl;
		}
//	protected:
    	virtual	void sleep()  //virtual��ʾ�麯�������ڶ�̬�� ������void fn(Animal *pAnimal)�� ��������������ַʱ�ĳٰ� 
		{
			cout<<"animal sleep"<<endl;
		}
		
	//	virtual	void sleep()=0��  //��ʾ���麯�������������д��麯��ʱ������Ҫ��ʵ�֣���������Ӧ�ĺ���������ʵ�������� ����Ҫ���ڸ��ඨ��ʱ��
	                             //��Щ����������ڣ����������ڶ��壬�������ඨ�壨������ʵ��������麯����
	 
		void breathe()
		{
			cout<<"animal breathe"<<endl;
		}
		
};
class Fish:public Animal
{
	
	public:
		Fish():Animal(400,300) ,a(1) //�����๹�캯���в�ʱ��Ҫ���� Animal(400,300)�� ���������г���ʱ��Ҫ������Ӧ�ĳ���ֵ�����������aΪ1 
		{
			//cout<<"fish construct"<<endl;
		}
		~Fish()
		{
			//cout<<"fish deconstruct"<<endl;
		}
		
		void sleep()  //�����ĸ���    �����ĸ��ǳ����������ࣨ��������ࣩ֮�䣬���������س�����ͬһ�������� 
		{
			
			//Animal::sleep();  // ���������������������ڸ��ǵ�ʱ��ͬʱ�����˸�������������Ĺ��ܡ�::��ʾ�������ʶ�� 
			cout<<"fish sleep"<<endl;
			
		}
	
		void test()
		{
			sleep();
			breathe();
		}
		const int a;
};

void fn(Animal *pAnimal)
{
	pAnimal->sleep();
}


int change(int a,int b)
{
    int tmp = 0; 
 	tmp = b;
 	b = a;
 	a = tmp;
 	cout<<"a:"<<a;
 	cout<<"b:"<<b;
 	return a,b; //������ֱ�ӷ��ض�������������޸� 
}

int change_yinyong(int &a,int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int change_point(int *a ,int *b) 
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() 
{
	//Animal am;
	//am.sleep();
	Fish fh;
	//fh.sleep();
	//fh.test();
	Animal *pAnimal;
	pAnimal = &fh;
	fn(pAnimal);
	
	//cpp�е����� 
	int a = 6;
	int &b = a; //���ñ����ڶ���ʱ������ ���粻�ܣ�int &b;b=a; ���⣺&�����ڶ���ʱʹ���������ã��������ط�ʹ�ã�����ȡ��ַ�� 
	             //ƽʱ������Ҫ�����ø�������ֵ�����׻�����һ������ڲ�������ʱ�����ã���ʡ�ڴ�ռ� 
	b=5;
	cout<<"a:"<<a<<endl;  //����b������a����b�޸ģ�aҲ���޸� 
	
	int x =  33;
	int y = 66;
	//x,y = change(x,y);
	//change_yinyong(x,y); //Ч����x=change(x,y);һ����ע����������return��ֵ�� 
	//change_point(&x,&y);  //change_point�� change_yinyongЧ��һ�� 
	cout<<"x:"<<x<<endl;
	cout<<"y:"<<y<<endl;
}


//һ����Ķ���ͺ���ԭ����������һ��ͷ�ļ��У�����ľ��庯��ʵ�ַ���һ��Դ�ļ��� 
