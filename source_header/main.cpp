#include <iostream>
#include "Animal.h"
#include "Fish.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Animal ani(2,2);
	ani.breathe();
	Fish fs(3,3);
	fs.breathe(); 
	return 0;
}
