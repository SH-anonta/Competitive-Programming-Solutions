#include <iostream>
#include "stdio.h"

using namespace std;

int main() {
  int s;

  scanf("%d", &s);

  int h = s / (60*60);
  s %= (60*60);

  int m = s / 60;
  s %= 60;

  printf("%d:%d:%d\n", h,m,s);

  return 0;
}
