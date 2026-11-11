#include "rectangle.h"

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}


void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getArea(){
    return width * height;
}

double Rectangle::getCircum(){
    return 2 * (width + height);
}
