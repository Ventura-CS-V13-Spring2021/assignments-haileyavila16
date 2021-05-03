#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRdnum()
{
  return rand() % 10;
}
int findMin(int num1, int num2, int num3)
{
 if(num1<=num2 && num1<=num3) {
   return num1;
 }
 if(num2<=num1 && num2<=num3){
   return num2;
 }
 else return num3;
 }
}
int findMax(int num1, int num2, int num3)
{
if(num1>=num2 && num1>=num3) {
   return num1;
 }
 if(num2>=num1 && num2>=num3){
   return num2;
 }
 else return num3;
 }
 int getDifference(int num1, int num2, int num3){
   return findMax(num1, num2, num3) - findMin(num1, num2, num3);
 }
 
}
  
