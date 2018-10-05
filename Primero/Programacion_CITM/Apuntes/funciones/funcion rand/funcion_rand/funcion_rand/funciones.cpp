#include<iostream>
#include<cstdlib>
using namespace std;

int randomizador(int x) {
	int result;
	x = 1 + (rand() % 6);
	result = x;
	return result;
}