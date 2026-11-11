#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle(double, double);

    void setWidth(double newWidth);
    void setHeight(double newHeight);

    double getArea();
    double getCircum();

};

#endif // RECTANGLE_H
