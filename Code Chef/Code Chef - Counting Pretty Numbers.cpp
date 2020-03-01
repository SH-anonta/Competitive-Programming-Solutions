#include "math.h"
#include "stdio.h"
#include <iostream>

using namespace std;

int arr[100005];

int prettyCount(int l, int r) {
  arr[0]= 0;

  int x;
  int cc=  0;
  while(l<= r) {
    x = l%10;

    if(x == 2 || x == 3 || x == 9) {
      cc++;
    }

    arr[l]= cc;

    l++;
  }

  return cc;
}

void solve() {
  int l, r;
  scanf("%d%d", &l, &r);

  printf("%d\n", arr[r]-arr[l-1]);
}

int main() {
  int t;
  scanf("%d", &t);

  prettyCount(1, 100001);

  while(t--) {
    solve();
  }

}