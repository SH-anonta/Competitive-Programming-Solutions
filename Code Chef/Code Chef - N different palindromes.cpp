#include "math.h"
#include "stdio.h"
#include <iostream>

using namespace std;

void solve() {
  int n;
  scanf("%d", &n);
  string chars = "abc";

  int idx = 0;
  while(n--) {
    printf("%c", chars[idx]);

    idx++;

    if(idx > 2) {
      idx = 0;
    }
  }

  printf("\n");
}

int main() {
  int t;
  scanf("%d", &t);

  while(t--) {
    solve();
  }

}