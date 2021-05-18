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
  
}