#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream file_("students.txt");
  int id;
  string name;
  int score;
  if(file_.is_open())
  {
    while(file_ >> id >> name >> score)
    {
      cout << id << "Student name: " << name <<
    }
  }
}

