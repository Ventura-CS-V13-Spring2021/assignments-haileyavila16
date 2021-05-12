#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(Coordinate lbval, Coordinate rtval)
{
  Rectangle::setLBRT(lbval, rtval);
  Rectangle::area = (rtval.getX() - lbval.getX()) * (rtval.getY() - lbval.getY());
  
}