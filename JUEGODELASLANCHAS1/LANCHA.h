#pragma once
#include <iostream>

class LANCHA
{
private:
    int velocity;
    int distance;
    int nitro;
    std::string name;
    int pDado;
public:
    //constructor

    void Lancha(int ditancia, std::string pvelocidad, int pAttack, int pnitro);

    void Lancha(int ditancia, int pvelocidad, std::string pName, int pnitro);

    void Lancha(int pdistance, int pvelocity, int pnitro, std::string pName);

    void Lancha(int pVelocity , int pDistance, int pNitro, std::string pName );

    //getters
    int  getVelocity();
    int  getDistance ();
    int  getNitro();
    std::string getName();
    //setters
    void setVelocity (int pDistance);
    void setDistance (int pVelocity);
    void setNitro    (int pNitro);
    void setName     (std::string pName);

    //metodos propios
    void printStatus();
    void distanceTraveled();
    void velocity();
    void secondvelocity(int pDado);
    
   



    LANCHA(int pVelocity, int pDistance, int pNitro, std::string Pname);

};

