#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include "tank.h"
#include "gasolineTank.h"
#include "dieselTank.h"

using namespace std;

int main() {

	srand(time(NULL));

	int opt, opt1, opt2, op, l, rcon1, rcon2, rcon3, rpr1, rpr2, rpr3;

	rcon1 = (rand() % 67);
	rcon2 = (rand() % 800);
	rcon3 = (rand() % 75);
	rpr1 = ((rand() % 4)+1);
	rpr2 = ((rand() % 4)+1);
	rpr3 = ((rand() % 4)+1);


	dieselTank diestanka("diesel a <0>", rcon1, 67, rpr1);
	dieselTank diestankb("diesel b <1>", rcon2, 800, rpr2);
	gasolineTank gastank("gasoline <2>", rcon3, 75, rpr3);

	do {
		diestanka.printDiposit();
		diestankb.printDiposit();
		gastank.printDiposit();

		cout << "<0>take out\t<1>refuel\t<2>display\t<3>transfer\t<4>close\n";
		cin >> op;
		cout << "\n";

		switch (op) {
		case 0:
			cout << "how much?\n";
			cin >> l;
			cout << "which one?\n <0> <1> <2>";
			cin >> opt;

			switch (opt) {
			case 0:
				diestanka.subministrarCombustible(l);
				break;
			case 1:
				diestankb.subministrarCombustible(l);
				break;
			case 2:
				gastank.subministrarCombustible(l);
				break;
			}
			break;

		case 1:
			cout << "how much?\n";
			cin >> l;
			cout << "which one?\n <0> <1> <2>";
			cin >> opt;

			switch (opt) {
			case 0:
				diestanka.carregarDiposit(l);
				break;
			case 1:
				diestankb.carregarDiposit(l);
				break;
			case 2:
				gastank.carregarDiposit(l);
				break;
			}
			break;

		case 2:
			diestanka.display();
			diestankb.display();
			gastank.display();
			break;

		case 3:
			cout << "How much?\n";
			cin >> l;
			cout << "from <0> <1> <2>\n";
			cin >> opt1;
			cout << "to <0> <1> <2>\n";
			cin >> opt2;

			if (opt1 == opt2) {
				cout << "same tank\n";
			}
			else if (opt1 == 0 && opt2 == 1) {
				diestanka.fuelTransfer(l, &diestankb);
			}
			else if (opt1 == 1 && opt2 == 0) {
				diestankb.fuelTransfer(l, &diestanka);
			}
			else if (opt1 == 2 || opt2 == 2) {
				cout << "incompatible\n";
			}

			break;

		default:
			op = 4;
			break;
		}

	} while (op != 4);

	system("pause");
	return 0;
}