#include <iostream>
#include "function.h"
using namespace std; 

// Dado
	int roll(){ 
	srand(time(0));
	int x = rand()%6+1;
	return (x);
	};