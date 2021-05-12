#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(Coordinate lbval, Coordinate rtval)
{
  Rectangle::setLBRT(lbval, rtval);

 //Solves for the center and the area 
  Rectangle::area = (rtval.getX() - lbval.getX()) * (rtval.getY() - lbval.getY());
  Rectangle::center = Coordinate((lbval.getX()) + (rtval.getX() - lbval.getX())) / 2, (lbval.getY() + (rtval.getY() - lbval.getY()) /2);
}

//Gets the left bottom coordinate
Coordinate Rectangle::getLB() const
{
  return Rectangle::lb; 
}

//Gets the top right coordinate
Coordinate Rectangle::getRT() const
{
  return Rectangle::rt;
}

//Gets the area
Coordinate Rectangle::getArea() 
{
  return Rectangle::area;
}

//Gets the center
Coordinate Rectangle::getCenter() 
{
  return Rectangle::center;
}

void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
  Rectangle::lb = lbval;
  Rectangle::rt = rtval;
  Rectangle::area = (rtval.getX() - lbval.getX()) * (rtval.getY() - lbval.getY());
  Rectangle::center = Coordinate((lbval.getX()) + (rtval.getX() - lbval.getX())) / 2, (lbval.gety() + (rtval.getY() - lbval.get()) /2);
}

//Prints the bottom left,top right, area, and center of the rectangle
void Rectangle::printRectangle() const
{
  cout << "Left Bottom Coordinate:" << endl;
  lb.printXY();
  cout << "Right Top Coordinate:" << endl;
  rt.printXY();
  cout << "Area:" << area << endl;
  cout << "Center:" << endl;
  center.printXY();
}