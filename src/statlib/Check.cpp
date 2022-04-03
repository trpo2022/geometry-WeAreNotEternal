#include "Check.h"
#include <iostream>
#include <math.h>

using namespace std;
int check(int x1, int x2, int y1, int y2, int r1, int r2) {
  int rast = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  int qwe = r1 + r2;
  int asw = 1;
  int asw_1 = 0;
  if (rast < qwe)
    return (asw);
  else
    return (asw_1);
}
