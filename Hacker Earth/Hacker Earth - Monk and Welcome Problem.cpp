#include <bits/stdc++.h>

using namespace std;

namespace{
  int CC_= 0;
  #define sf scanf
  #define pf printf
  #define PP cin.get();
  #define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
  #define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);

  typedef long long LL;
  typedef vector<int> vint;
  typedef pair<int,int> pint;
  typedef unsigned long long ULL;

  //constants
  const double EPS= 1E-9;
  const double PI= 2*acos(0.0);
  const long long MOD= 1000000007;
}

int arr[100005];

void solve() {
  int n;
  cin>> n;

  for(int i= 0; i<n; i++) {
    cin>> arr[i];
  }

  int val;
  for(int i= 0; i<n; i++) {
    cin>> val;
    cout<< arr[i]+val << " ";
  }

  cout<<endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//  freopen("./input.txt", "r", stdin);

  solve();

  return 0;
}

