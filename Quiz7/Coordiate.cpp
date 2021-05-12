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
int Coordinate::getY() const{
  return y;
}

//Sets the x and y coordinates
void Coordinate::setXY(double xval, double yval)
{
  x = xval;
  y = yval;
}

//Prints the x and y coordinates
void Coordinate::printXY() const
{
  cout << "x= " << x << endl;
  cout << "y= " << y << endl;
}

//I had run out of time on the quiz and didnt get the chance to type up my explanation and the problems I had so I am going to put it here. All in all I still am having trouble getting this one to work correctly because I always mess up on running it so I use a compiler I found to run my codes usually which can sometimes mess me up a bit, but I tried to copy and paste sections from the hpp to the cpp files and then add/edit what needed to be there in order to make sure I had matching names and stuff. I did get a couple errors because I accidently put a lowercase letter in the names instead of a capital letter which I made sure to go back and fix because I have done that before. I also didnt realize that the area part was supposed to be double and not Coordinate so I ha to fix that part as well. I found that figuring out the Coordinate.cpp file was not as difficult as the Rectangle.cpp because it didnt seem to require as much but I still had some trouble. I also tried to add short comments throughout this time on what I was trying to acheive with each section of code just to kind of keep track. 