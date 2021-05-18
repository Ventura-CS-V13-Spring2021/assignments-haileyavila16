#include <iostream>
#include "DOB.hpp"
using namespace std;

DOB::DOB()
{
  month = 0;
  day = 0;
  year = 0;
}         
DOB::(int m, int d, int y)
{
  month = m;
  day = d;
  year = y;
}
int DOB::getDay() const
{
  return day;
}
int DOB::getYear() const
{
  return year;
}
void DOB::setMonth(int m)
{
  month = m;
}
void DOB::setDay(int d)
{
  day = d;
}
void DOB::setYear(int y)
{
  year = y;
}
void DOB::setDOB(int m, int d, int y)
{
  month = m;
  day = d;
  year = y;
}
void DOB::printDate() const
{
  cout << m << "/" << d << "/" << y << "\n";
}