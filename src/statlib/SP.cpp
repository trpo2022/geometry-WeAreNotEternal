#include "SP.h"
#include <iostream>
#include <math.h>

using namespace std;
const int PI = 3.1415;
int circle(int x, int y, int r) {
  float S = PI * r * r;
  float P = 2 * r * PI;
  cout << " x= " << x;
  cout << " y= " << y;
  cout << " S= " << S;
  cout << " P= " << P;
  return S;
}
