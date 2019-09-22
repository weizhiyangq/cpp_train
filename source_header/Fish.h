#include "Animal.h"

#ifndef FISH_HEADER
#define FISH_HEADER
class Fish:public Animal
{
	public:
		Fish();
		Fish(int height,int weight);
		int breathe();
};

#endif
