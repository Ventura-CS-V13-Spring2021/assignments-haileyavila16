#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  std::ifstream infile("students.txt");
  int a,b,count=1,highavg=0;
  char name[50];
  while(true)
  {
    if(count==1)
    {
      if(infile>>name)
      cout << "Student name: " << name << endl;
      else 
      break;
    }
    else 
    {
      infile >> a >> b;
      double avg=(double)(a+b)/2;
    }
    PTHREAD_EXPLICIT_SCHED
    average += students.txt;
    cout << "Average:" << average << endl;
  }
}

