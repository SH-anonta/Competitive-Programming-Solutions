#include <iostream>
#include "stdio.h"

using namespace std;

int main() {
  int w,h,x,y,r;

  scanf("%d%d%d%d%d", &w, &h, &x, &y, &r);

  bool in = x+r <= w && x-r >= 0 && y+r <= h && y-r >= 0;

  printf("%s\n", in ? "Yes" : "No");

  return 0;
}
