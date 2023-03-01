#include <iostream>
using namespace std;

int g = 10; // This is a global variable

// global variable accessed from 
// within a function 
int getter() 
{ 
	return g; 
} 

void setter(int x){
    g = x;
}

// main function 
int main() 
{ 
	setter(g);
	cout << getter() << endl; 
	
	return 0;
} 