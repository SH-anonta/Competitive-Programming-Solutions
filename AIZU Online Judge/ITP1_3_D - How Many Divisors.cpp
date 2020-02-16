#include <iostream>
#include "stdio.h"

using namespace std;

int main() {
  int a,b,c;
  int cc = 0;

  scanf("%d%d%d", &a,&b,&c);

  while(a <= b) {
    if (c % a == 0) {
      cc++;
    }

    a++;
  }

  printf("%d\n", cc);

  return 0;
}
