#pragma once
#include "LANCHA.h"
#include <iostream>

//constructor
LANCHA::LANCHA(int pVelocity, int pDistance, int pNitro, std::string Pname) {
	velocity = pVelocity;
	distance = pDistance;
	nitro = pNitro;
	name = Pname;
}

//getters
int LANCHA::getVelocity() {
	return velocity;

}

int LANCHA::getDistance() {
	return distance;
}
int LANCHA::getNitro() {
	return nitro;
}
std::string LANCHA::getName() {
	return name;
}

//setters

void LANCHA::setVelocity(int pvelocity) {
	velocity=  pvelocity;
}
void LANCHA::setDistance(int pdistance) {
	distance = pdistance;
}

void LANCHA::setNitro( int pnitro) {
	nitro =  pnitro;

}
void LANCHA::setName(std::string pname) {
	name = pname;
}

//metodos propios

void LANCHA::printStatus() {
	std::cout << "La lancha del primer corredor " << getName() << " va a una velocidad de:  " << getVelocity()<<"km/h" << std::endl;
}


void LANCHA::distanceTraveled() {
	distance = distance + velocity * 100;
}
void LANCHA::secondvelocity(int pDado) {
	velocity = velocity + pDado;
}





