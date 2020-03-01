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

vint arr;

int localInversionCount() {
  int cc = 0;

  int i = 1;
  int len = arr.size();

  while(i < len) {
    if(arr[i] < arr[i-1]) {
      cc++;
    }
    i++;
  }

  return cc;
}

int globalInversionCount() {
  int cc = 0;
  int len = arr.size();

  for(int i = 0; i<len; i++) {
    for(int j = i+1; j<len; j++) {
      if(arr[i] > arr[j]) {
        cc++;
      }
    }
  }

  return cc;
}

void solve() {
  int n, val;
  cin>>n;
  arr.clear();

  while(n--) {
    cin>>val;

    arr.push_back(val);
  }


  int l = localInversionCount();
  int g = globalInversionCount();

  bool good = l == g;

  cout << (good ? "YES" : "NO") <<endl;
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

