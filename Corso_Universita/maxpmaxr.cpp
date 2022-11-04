#include <iostream>
using namespace std;

int* maxp(int* pa, int* pb)
{ if (*pa >= *pb) return pa;
  return pb;
}
int& maxr(int& ra, int& rb)
{ if (ra >= rb) return ra;
  return rb;
}
int main()
{ int x, y;
  *maxp(&x, &y) = 0;
  //maxp(&x, &y) = 0; // illecito
  y = *maxp(&x, &y);
  y = maxr(x, y);
}

