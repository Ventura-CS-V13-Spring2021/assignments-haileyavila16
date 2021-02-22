#include <iostream>
using namespace std;
int main()
{
  int num1, num2, num3;
  cout << "Enter three integar values: ";
  cin >> num1 >> num2 >> num3;

 if (num1 > num2)
 {
   if (num1 > num3)
     cout << "num1 is max" << num1 << endl;
   else 
     cout << "num3 is max" << num3 << endl;
 }
 else{
   if (num2 > num3)
     cout <<  "num2 is max" << num2 << endl;
   else 
     cout << num3 << "is the max" << endl;
 }
 return 0;
}
