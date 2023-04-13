

#include <iostream>
#include "LANCHA.h"

int main() {
	int turn = 0;

	LANCHA LANCHA1(0, 0, 1, "Víctor");
	LANCHA LANCHA2(0, 0, 1, "Christian");

	LANCHA1.printStatus();
	LANCHA2.printStatus();

	do {
		int dados = rand() % 6 + 1;
		LANCHA1.secondvelocity(dados);
		dados = rand() % 6 + 1;
		LANCHA2.secondvelocity(dados);
		LANCHA1.distanceTraveled();
		LANCHA2.distanceTraveled();

	} while (turn <= 5);

	if (LANCHA1.getVelocity() < LANCHA2.getVelocity()) {
		std::cout << "Ha ganado la LANCHA1" << std::endl;
	}
	else if (LANCHA2.getVelocity() < LANCHA1.getVelocity()) {
		std::cout << "Ha ganado la LANCHA2" << std::endl;
	}
	else if (LANCHA1.getVelocity() == LANCHA2.getVelocity()) {
		std::cout << "Ha habido un empate" << std::endl;
	}
}