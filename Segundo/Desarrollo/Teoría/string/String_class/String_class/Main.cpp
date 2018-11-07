#include"String.h"
#include<iostream>

int main() {
	String a("hello");
	String b(a);

	b = "bye";
	printf ("%s\n",a);
	printf ("%s\n", b);

	system("Pause");
}