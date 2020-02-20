#include "math.h"
#include "stdio.h"
#include <iostream>

using namespace std;

void solve(int n, int x) {
  int cc = 0;
  int sum = 0;

  for(int a = 1; a<= n; a++) {
    if(a > x) {
      break;
    }

    for(int b = a+1; b<= n; b++) {
      if(a+b > x) {
        break;
      }

      for(int c = b+1; c<= n; c++) {
        sum = a+b+c;
        if(sum > x) {
          break;
        }
        else if(sum == x) {
          cc++;
        }
      }
    }
  }

  printf("%d\n", cc);
}

int main() {
  int n, x;

  while(scanf("%d%d", &n, &x) && !(n == 0 && x == 0)) {
    solve(n, x);
  }
}