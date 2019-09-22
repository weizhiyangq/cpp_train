#include "Fish.h"
#include <iostream>
using namespace std;
Fish::Fish()
{
}
Fish::Fish(int height,int weight):Animal(0,0) 
{
}
int Fish::breathe()
{
	cout<<"fish bubble"<<endl;
}
