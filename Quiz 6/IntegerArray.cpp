#include <iostream>
#include "IntegerArray.hpp"
using namespace std;

int IntegerArray::getLength()
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
void fillUp()
{
  length = N;
  for(int i=0;i<N;i++){
    numbers[i] = (rand() % 100) +1;
  }
}
void getPrimenumber()
{
 int N;
 if (N/2 ==0)
 cout << "Number is nit prime" << endl;
}
void printAll()
{
  for (int i = 0; i < getLength; i++)
        cout << N[i] << "\t";
    cout << endl;
}