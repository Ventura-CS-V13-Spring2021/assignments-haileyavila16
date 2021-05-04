#include <iostream>
#include "integararray.h"
using namespace std;

int IntegarArray::getLength(void) const
{
  return length;
}
void sortArray(int array[], int length)
{
  int i, j, flag=1;
  int temp;
  
  for(i=1;i<=length && flag;i++)
  {
    flag=0;
    for(j=0;j<(length-i);j++)
    {
      if (array[j+1]>array[j])
      {
        temp=array[j+1];
        array[j+1]=array[j];
        array[j]=temp;
        flag=1;
      }
    }
  }
  return;
}
void fillUp(void)
{
  return rand() % 100;
}
void getPrimenumber(void) const
{
 int N;
 if (N/2 ==0)
 cout << "Number is nit prime" << endl;
}
void printAll(void) const
{
  for (int i = 0; i < length; i++)
        cout << N[i] << "\t";
    cout << endl;
}