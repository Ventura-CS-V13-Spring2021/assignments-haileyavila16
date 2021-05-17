
#include "IntegarArray.hpp"
#include <iostream>
using namespace std;

//IntegarArray.cpp

int IntegerArray::getLength(void) const
{
 return length;
}
int IntegerArray::getLastelm(void) const
{
   std::array::back();
    // return the value of the last element;
}
void IntegerArray::printAll(void) const
{ 
  for (int i = 0; i < length; i++)
        cout << numbers[i] << "\t";
    cout << endl;
    // Print all elements
}
void IntegerArray::fillUp(void)
{
   int i, N=length;
   srand(time(0));
   int array[N],i;
   for(int i=0;i<=100;i++);
       [i]=rand()%100+1
  return 0;
    // Make up the array with the random integer values(0 to 100)
    // The array numbers has the maximum capacity with N.
    // Set N to the length.
}
void IntegerArray::sortAsc()
{
  sort(N);
    // Sort the array values with ascending order
}
void IntegerArray::removeLastelm(void)
{

    // Decrease 1 from the length
}
void IntegerArray::appendElement(int v)
{
    // Append the value v to the array
 length += 1;
}

//file number 2 for Assignment 6.1