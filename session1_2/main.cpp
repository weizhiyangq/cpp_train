#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
public:可以在子类和外面访问
protected：可以被子类访问，但不能被外部访问
private：子类和外部都不能访问 
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
    	virtual	void sleep()  //virtual表示虚函数，用于多态性 。用于void fn(Animal *pAnimal)中 ，传递子类对象地址时的迟绑定 
		{
			cout<<"animal sleep"<<endl;
		}
		
	//	virtual	void sleep()=0；  //表示纯虚函数，当有类中有纯虚函数时，必须要先实现（即定义相应的函数）才能实例化对象 ，主要用于父类定义时，
	                             //有些函数必须存在，但不好现在定义，留给子类定义（即子类实现这个纯虚函数）
	 
		void breathe()
		{
			cout<<"animal breathe"<<endl;
		}
		
};
class Fish:public Animal
{
	
	public:
		Fish():Animal(400,300) ,a(1) //当父类构造函数有参时，要加上 Animal(400,300)； 当类里面有常量时，要给出相应的常量值，如这里令常量a为1 
		{
			//cout<<"fish construct"<<endl;
		}
		~Fish()
		{
			//cout<<"fish deconstruct"<<endl;
		}
		
		void sleep()  //函数的覆盖    函数的覆盖出现在两个类（父类和子类）之间，函数的重载出现在同一个类里面 
		{
			
			//Animal::sleep();  // 加了这句后，子类的这个函数在覆盖的时候，同时保留了父类中这个函数的功能。::表示作用域标识符 
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
 	return a,b; //好像不能直接返回多个变量，后续修改 
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
	
	//cpp中的引用 
	int a = 6;
	int &b = a; //引用必须在定义时就引用 。如不能：int &b;b=a; 另外：&符号在定义时使用则是引用，在其他地方使用，则是取地址了 
	             //平时尽量不要用引用给变量赋值，容易混淆，一般可以在参数传递时用引用，节省内存空间 
	b=5;
	cout<<"a:"<<a<<endl;  //由于b引用了a，对b修改，a也会修改 
	
	int x =  33;
	int y = 66;
	//x,y = change(x,y);
	//change_yinyong(x,y); //效果和x=change(x,y);一样，注意这样不用return赋值了 
	//change_point(&x,&y);  //change_point和 change_yinyong效果一样 
	cout<<"x:"<<x<<endl;
	cout<<"y:"<<y<<endl;
}


//一个类的定义和函数原型声明放在一个头文件中，把类的具体函数实现放在一个源文件中 
