#include <iostream>
using namespace std;
int main()
{
  int num1, num2, num3;
  cout << "Enter three integer values: ";
  cin >> num1 >> num2 >> num3;
  
 if (num1 == num2 && num2 == num3)
     cout << "All numbers are the same" << endl;
 else if (num1 == num2 || num2 == num3 || num2 == num3)
     cout << "There are two duplicated numbers" << endl;
 else 
      cout << "All numbers are distinct" << endl;

 return 0;

}