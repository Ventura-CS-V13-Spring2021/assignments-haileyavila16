#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int SIZE=10;
  int numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
  int diff[10];
  int sum=0;

  for(int i=0;i<SIZE;i++){
    sum = sum + numbers[i];
  }
  for(int i=0;i<SIZE;i++){
    diff[i] = sum-numbers[i];
  }
  for(int i=0;i<SIZE;i++){
    cout << " " << numbers[i] << setw(2);
  }
cout << endl;
for(int i=0;i<SIZE;i++){
  cout << diff[i] << " ";
}
return 0;
}