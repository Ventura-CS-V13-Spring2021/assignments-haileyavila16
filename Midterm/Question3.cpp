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
 void fileWrite(int difference){
   ofstream out("Question3.cpp",ios::app);
   out << difference << endl;
   out.close();
}
 
 int main()
 {
   srand(time(NULL));
   int num1, num2, num3, min, max, diff=0;
   {
     num1=getRdnum();
     num2=getRdnum();
     num3=getRdnum();
     min=findMin(num1, num2, num3);
     max=findMax(num1, num2, num3);
     cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
     cout <<"Difference between min and max: " << diff << endl;
     fileWrite(diff);
   }
   while(diff>=3);
   return 0;
 }

  
