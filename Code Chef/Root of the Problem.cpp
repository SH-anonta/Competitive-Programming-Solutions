#include "math.h"
#include "stdio.h"
#include <iostream>

using namespace std;

void solve() {
  int n;
  scanf("%d", &n);

  int result = 0;
  int a, b;

  while(n--) {
    scanf("%d%d", &a, &b);
    result += a-b;
  }

  printf("%d\n", result);
}

int main() {
  int t;
  scanf("%d", &t);

  while(t--) {
    solve();
  }

}