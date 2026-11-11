#include <iostream>
#include "car.h"
#include <memory>
#include "rectangle.h"
#include "student.h"


using namespace std;

int main()
{

    // Create an object on the stack
    Car objCar1("Audi", "A6", 2020);
    // Print the object's data
    objCar1.printData();

    // Create a Rectangle object on the heap with a raw pointer
    Rectangle* rect = new Rectangle(5.5, 11.2);
    //print area and circumference
    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;
    //destroy object
    delete rect;
    rect = nullptr;

    //Create a Student object on the heap with a smartpointer
    unique_ptr<Student> objStudent1=make_unique<Student>("Anni", 24323, 8.5);
    cout<<"Name: "<<objStudent1->getName()<<", Student number: "<<objStudent1->getStudentNumber()<<", average: "<<objStudent1->getAverage();

    return 0;
}
