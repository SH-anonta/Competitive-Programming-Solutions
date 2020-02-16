#include "math.h"
#include "stdio.h"

using namespace std;

int main() {
  double r;
  double pi = acos(-1);

  scanf("%lf", &r);

  printf("%.6lf %.6lf\n", pi*r*r, 2*pi*r);

  return 0;
}
