#ifndef ANIMAL_HEADER  //Ԥ���� 
#define ANIMAL_HEADER
class Animal
{
	public:
		Animal();
		Animal(int height,int weight);
		
		int eat();
		int sleep();
		virtual int breathe();
		
 } ;
 
 #endif 
