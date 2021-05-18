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
    num_classes = num;
    class_list = new string[num];

    for(int i=0;i<num_classes;i++)
    {
      cout << "Course Name: ";
      cin >> class_list[i];
    }
  }
  
};

