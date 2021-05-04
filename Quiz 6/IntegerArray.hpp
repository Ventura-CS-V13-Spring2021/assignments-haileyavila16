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
      void sortArray(int flag);
      void fillUp(void);
      void getPrimenumber(void) const;
      void printAll(void) const;
};
#endif 