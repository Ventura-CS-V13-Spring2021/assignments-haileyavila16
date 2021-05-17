#include "IntegerArray.hpp"
#include <iostream>
using namespace std;

 int main()
{
  srand(time(NULL));

  IntegerArray N;

  N.fillUp();

  N.printAll();
  cout << "Current length is: " << N.getLength() << endl;
  cout << "After Sorting: \n";

  N.sortAsc();
  N.printAll();

  cout << "Removing last element: " << endl;
  N.removeLastelm();
  cout << "Current length is: " << N.getLength() << endl;
  N.printAll();
  return 0;
}
