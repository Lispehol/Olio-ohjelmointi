#include "car.h"

Car::Car(string b, string m, int y) {
    brand = b;
    model = m;
    yearmodel = y;
}


void Car::setModel(const string &newModel)
{
    model = newModel;
}


void Car::setYearmodel(int newYearmodel)
{
    yearmodel = newYearmodel;
}


void Car::setBrand(string b){
    brand = b;

}
void Car::printData(){
    cout<<"Auton merkki="<<brand<<endl;
    cout<<"Auton malli="<<model<<endl;
    cout<<"Auton vuosimalli="<<yearmodel<<endl;
    cout<<"*************************"<<endl;
}
