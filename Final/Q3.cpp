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
      class_list[i] = rhs.num_classes;
    }
  }
  void show()
  {
    cout << "Name: " << name << endl;
    cout << "Courses: \n";

    for(int i=0;i<num_classes;i++)
    {
      cout << class_list[i] << num_classes;
    }
  }
  void reset()
  {
    num_classes = 0;
    delete[]class_list;
  }
  Student operator = (Student &rhs)
  {
    Student res;
    res.name = rhs.name;
    res.num_classes = rhs.num_classes;


  }
};

