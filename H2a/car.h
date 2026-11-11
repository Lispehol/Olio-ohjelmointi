#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearmodel;

public:
    Car(string, string, int);

    void setBrand(string b);

    void setModel(const string &newModel);

    void setYearmodel(int newYearmodel);

    //tulostaa auton merkin, mallin ja valmistusvuoden.
    void printData();
};

#endif // CAR_H
