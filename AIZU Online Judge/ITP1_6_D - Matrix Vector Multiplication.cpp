#include "math.h"
#include "stdio.h"
#include <iostream>

using namespace std;

int mat[101][101];

int main() {
  int n, m;

  cin>> n >> m;

  for(int i= 0; i<n; i++) {
    for(int j= 0; j<m; j++) {
      cin>>mat[i][j];
    }
  }

  int col[101];

  for(int j= 0; j<m; j++) {
    cin>> col[j];
  }

  for(int i= 0; i<n; i++) {
    int x= 0;
    for(int j= 0; j<m; j++) {
      x+= col[j] * mat[i][j];
    }

    cout<< x <<endl;
  }
}