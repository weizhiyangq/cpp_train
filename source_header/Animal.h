#ifndef ANIMAL_HEADER  //‘§±‡“Î 
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
