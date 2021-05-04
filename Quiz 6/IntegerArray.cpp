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

}
void getPrimenumber(void) const
{

}
void printAll(void) const
{
  for (int i = 0; i < length; i++)
        cout << numbers[i] << "\t";
    cout << endl;
}