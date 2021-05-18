#include <iostream>
using namespace std;

int getNumDiv(int arr[], int n, int len)
{
  int cnt = 0;

  for(int i=0;i<len;i++)
  {
    if(n%arr[i]==0)
      cnt++;
  }
  return cnt-1;
}
int main()
{
  int arr[] = {1,2,4,6,10,24};
  int len = sizeof(arr)/sizeof(arr[0]);

  cout << "Array: ";
  for(int i=0;i<len;i++)
    cout << arr[i] << " ";

  int max=0, index, num;

  for(i=0;i<len;i++)
  {
    num = getNumDiv(arr, arr[i], len);
  }
}