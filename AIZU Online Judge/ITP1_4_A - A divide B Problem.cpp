#include <iostream>
#include "stdio.h"

using namespace std;

int main() {
  int a,b;

  scanf("%d%d", &a,&b);

  printf("%d %d %.5f\n", a/b, a%b, ((double)a)/b);

  return 0;
}
