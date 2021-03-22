#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  int rdnum;
  int N;
  int sum=0;
  ifstream   rdfile;

  rdfile.open("rdnum.txt");
  rdfile >> N;
  for(int i; i<N; i++)
  {
    rdfile >> rdnum;
    sum += rdnum;
    cout << rdnum << endl;
  }
  cout << "Sum" << sum << endl;

  rdfile.close();
}