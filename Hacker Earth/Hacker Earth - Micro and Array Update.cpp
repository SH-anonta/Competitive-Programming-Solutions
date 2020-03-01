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

void solve() {
  int n, k;
  cin>> n >> k;

  int val;

  int mn= 1 << 30;

  for(int i= 0; i< n; i++) {
    cin>>val;
    mn = min(mn, val);
  }

  cout<< (mn >= k ? 0 : k-mn) <<endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//  freopen("./input.txt", "r", stdin);

  int t;
  cin>>t;

  while(t--) {
    solve();
  }

  return 0;
}

