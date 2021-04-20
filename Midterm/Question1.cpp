#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  fstream file;
  file.open("students.txt");
  {
    while(file >> name >> score)
    {
      cout << file << "Student name: " << name << "score: " << score
    }
    average += students.txt;
    cout << "Average:" << average << endl;
  }
}

