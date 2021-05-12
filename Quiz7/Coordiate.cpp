#include "Coordinate.hpp"
#include <iostream>
using namespace std;

Coordinate::Coordinate()
{
  Coordinate::setXY(0.0,0.0);
}
Coordinate::Coordinate(double xval, double yval)
{
  Coordinate::setXY(xval,yval);
}
//Gets the x coordinate
int Coordinate::getX() const{
  return x;
}
//Gets the y coordinate
int Coordinate::getX() const{
  return x;

