#include <iostream>
#include "DOB.hpp"
using namespace std;

DOB::DOB()
{
  month = 0;
  day = 0;
  year = 0;
}         
DOB::DOB(int m, int d, int y)
{
  month = m;
  day = d;
  year = y;
}
int DOB::getMonth() const
{
  return month;
}
int DOB::getDay() const
{
  return day;
}
int DOB::getYear() const
{
  return year;
}
void DOB::printDate() const
{
  cout << day << "/" << month << "/" << year;
}
void DOB::setDOB(int m, int d, int y)
{
  month = m;
  day = d;
  year = y;
}
void DOB::setDay(int d)
{
  day = d;
}
void DOB::setMonth(int m)
{
  month = m;
}
void DOB::setYear(int y)
{
  year = y;
}