#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Student
{
public:
Student();
Student(const Student& stuObj);
string getName() const
{
  return name;
}
int getNumClasses() const
{
  return NumClasses;
}
void inputValue();

void reset()
{
  for(int i=0;i<numClasses;i++)
    classList[i]='\0';
  numClasses=0;
}
void display();
Student% operator=(const Student& rValue);
~Student();

private:

}