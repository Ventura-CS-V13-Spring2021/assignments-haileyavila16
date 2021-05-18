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
  Student(Student& rhs)
  {
    name = rhs.name;
    num_classes = rhs.num_classes;
    class_list = new string[num_classes];

    for(int i=0;i<num_classes;i++)
    {
      class_list[i] = rhs.
    }
  }
  void show()
  {
    cout << "Name: " << name << endl;
    cout << "Courses: \n";

    for(int i=0;i<num_classes;i++)
    {
      cout << class_list[i] << 
    }
  }
};

