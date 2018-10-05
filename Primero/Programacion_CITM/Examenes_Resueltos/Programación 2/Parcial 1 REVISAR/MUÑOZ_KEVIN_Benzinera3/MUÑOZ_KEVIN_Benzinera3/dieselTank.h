#ifndef _DIESELTANK_H_
#define _DIESELTANK_H_

#include <iostream>
#include <string>

using namespace std;

class dieselTank : public tank {
protected:
	int price, refueled, amount;

public:
	dieselTank(char*name, int con, int cap, int pr) :
		tank(name, con, cap) {
		price = pr;
		refueled = 0;
		amount = 0;
	}

	int subministrarCombustible(int fill) {
		int lit = fill;
		if (fill > con) {
			lit = con;
		}
		con = con - lit;
		refueled = refueled + lit;
		amount = price*lit;
		return lit;
	}

	void display() {
		cout << "name\t" << name << "\n";
		cout << "content\t" << con << "\n";
		cout << "capacity\t" << cap << "\n";
		cout << "price\t" << price << "\n";
		cout << "liters\t" << refueled << "\n";
		cout << "total amount\t" << amount << "\n\n";
	}

	void fuelTransfer(int fill, dieselTank*dt) {
		int wasted, hollow;
		wasted = subministrarCombustible(fill);
		hollow = dt->carregarDiposit(wasted);
		if (wasted > hollow) this->carregarDiposit(wasted - hollow);
	}
};


#endif // !_DIESELTANK_H_
