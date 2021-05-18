#include <iostream>
#include <string>
using namespace std;
class Student
{
 private:
  string name;
  int num_classes;
  string*class_list;

 public:
  Student()
  {

  }
  Student(string n, int num)
  {
    name = n;
  }
};

