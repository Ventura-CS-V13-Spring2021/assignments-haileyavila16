#include <iostream>
using namespace std;

int main()
{
 {int getRdnum=0;

   getRdnum = rand()%9+1;
   cout << getRdnum;

   return 0;
  }
  { int findMin, findMax;
     findMin = min(getRdnum);
     cout << findMin;
     findMax = max(getRdnum);
     cout << findMax;
  }

}