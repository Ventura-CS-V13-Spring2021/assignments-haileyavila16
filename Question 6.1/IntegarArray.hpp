#ifndef INTEGARARRAY_H
#define INTEGARARRAY_H
class IntegarArray 
{
  private:
      static const int N = 10;
      int numbers[N];
      int length = 0;
  public:
      int getLength();
      int getLastelm();
      void printAll();
      void fillUp();
      void sortAsc();
      void removeLastelm();
      void appendElement(int v);
};
#endif
