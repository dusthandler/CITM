#include<iostream>
#include<cstdlib> //necesario para rand
#include<ctime>
#include"prototipo.h"
using namespace std;

int main() {

	int a = 0;
	srand(time(0));
	cout << randomizador(a);


	system("pause");
	return 0;
}