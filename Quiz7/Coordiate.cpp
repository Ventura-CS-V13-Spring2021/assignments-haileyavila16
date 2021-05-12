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

