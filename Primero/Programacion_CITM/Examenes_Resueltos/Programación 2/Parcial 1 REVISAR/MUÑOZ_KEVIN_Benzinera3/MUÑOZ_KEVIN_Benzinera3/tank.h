#ifndef _TANK_H_
#define _TANK_H_

#include <iostream>
#include <string>

using namespace std;

class tank {
protected:
	string name;
	int con;
	int cap;

public:
	tank(char*n, int co, int ca) {
		name = n;
		con = co;
		cap = ca;
	}

	void printDiposit() {
		cout << "tank-" << name << "\n";
		cout << "content\t\t" << con << "\n";
		cout << "capacity\t" << cap << "\n\n";
	}

	int carregarDiposit(int fill) {
		int wasted = cap - con;
		if (wasted > fill) wasted = fill;
		con = con + wasted;
		return wasted;
	}

};

#endif // !_TANK_H_
