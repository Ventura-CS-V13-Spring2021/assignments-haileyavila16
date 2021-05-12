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
  Rectangle::center = Coordinate((lbval.getX()) + (rtval.getX() - lbval.getX())) / 2, (lbval.gety() + (rtval.getY() - lbval.get()) /2);
}
//Gets the left bottom coordinate
Coordinate Rectangle::getLB() const{
  return Rectangle::lb; 
}
//Gets the top right coordinate
Coordinate Rectangle::getRT() const{
  return Rectangle::rt;
}
//Gets the top right coordinate
Coordinate Rectangle::getRT() const{
  return Rectangle::rt;
}
//Gets the top right coordinate
Coordinate Rectangle::getRT() const{
  return Rectangle::rt;
}