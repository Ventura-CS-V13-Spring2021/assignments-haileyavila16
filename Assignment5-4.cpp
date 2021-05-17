#include <iostream>
using namespace std;

const int NUM_ROWS = 6;
const int NUM_COLS = 5;
const int SIZE = 10;
void findMaxSum(int [],int [][NUM_COLS]);
int main()
{
  int result[SIZE]={0};
  int numbers[NUM_ROWS][NUM_COLS]={{2,7,9,6,4},
                                    {6,1,8,10,4},
                                    {9,9,0,3,1},
                                    {8,8,7,8,9},
                                    {1,2,1,2,3}};
  findMaxSum(result,numbers);
  return 0;
}
void findMaxSum(int result[],int number[][NUM_COLS])
{
  int max=0,sum,index=0;
  for(int i=0;i<NUM_ROWS;i++)
  {
    sum = 0;
    for(int j=0;j<NUM_COLS;j++)
    {
      sum = sum+number[i][j];
    }
    if(sum>max)
    {
      max = sum;
      index = i;
    }
  }
  for(int i=0;i<NUM_COLS;i++)
  {
    result[i]=number[index][i];
  }
  cout << "The max summation row is {";
  for(int i=0;i<NUM_COLS;i++)
  {
    if(i!=NUM_COLS-1)
    cout << result[i] << ",";
    else
    cout << result[i];
  }
  cout << "}";
}