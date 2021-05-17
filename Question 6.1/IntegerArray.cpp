#include "IntegerArray.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;
int IntegerArray::getLength(){
  return length;
}
int IntegerArray::getLastelm(){
  if (length==0){
    cout << "No element in the array" << endl;
    return -1;
  }
  return numbers[length -1];
}
void IntegerArray::printAll(){
  
}