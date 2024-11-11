#include <iostream>
//#include <stdio.h>

#include "Circle.h"
#include "Rectangle.h"

// PG proj
// LE2A_06_オザワ

int main() {

    Circle circle;
    circle.SetRadius(5);
    circle.Size();
    circle.Draw();

    Rectangle rectangle;
    rectangle.SetWidth(5);
    rectangle.SetHeight(10);
    rectangle.Size();
    rectangle.Draw();

	return 0;
}