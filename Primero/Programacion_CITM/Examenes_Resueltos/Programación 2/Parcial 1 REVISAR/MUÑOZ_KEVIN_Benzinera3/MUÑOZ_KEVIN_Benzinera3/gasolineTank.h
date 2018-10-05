#ifndef _GASOLINETANK_H_
#define _GASOLINETANK_H_

#include <iostream>
#include <string>

using namespace std;

class gasolineTank : public tank {
protected:
	int price, refueled, amount;

public:
	gasolineTank(char*name, int con, int cap, int pr) :
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

	void fuelTransfer(int fill, gasolineTank*gt) {
		int wasted, hollow;
		wasted = subministrarCombustible(fill);
		hollow = gt->carregarDiposit(wasted);
		if (wasted > hollow) this->carregarDiposit(wasted - hollow);
	}
};

#endif // !_GASOLINETANK_H_
