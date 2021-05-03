#include <iostream>
#include <fstream>
using namespace std;
#define N 10

int prevNum=51;
int getRdnum()
{
  return rand() % 50+1;
}
int isGreater(int n)
{
  if(n>prevNum)
    return 1;
  else return 0;
}
int main()
{
 ofstream myfile;
 myfile.open("numbers.txt");
 for(int i=0;i<N;i++)
 {
   int currentNum = getRdnum();
   int check = isGreater(currentNum);
   prevNum = currentNum;
   if check==1
   {
     myfile.write(currentNum);
   }
 }
  myfile.close();
  return 0;
}





