#ifndef INTEGARARRAY_H
#define INTEGARARRAY_H
class IntegarArray 
{
  private:
      static const int N = 10;
      int numbers[N];
      int length = 0;
  public:
      int getLength(void) const;
      int getLastelm(void) const;
      void printAll(void) const;
      void fillUp(void) const;
      void sortAsc(void);
      void removeLastelm(void);
      void appendElement(int v);
};
#endif 