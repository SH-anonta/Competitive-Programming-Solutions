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
  int n;
  string s;

  cin>> n >> s;

  string q;
  char mapped;

  while(n--) {
    cin >> q;

    int len = q.size();
    for(int i= 0; i<len; i++) {
      char ch = q[i];

      if(ch == '_') {
        mapped = ' ';
      }
      else if(ch >= 'a' && ch <= 'z') {
        mapped = s[ch-'a'];
      }
      else if(ch >= 'A' && ch <= 'Z') {
        mapped = s[ch-'A']-32;
      }
      else {
        mapped = ch;
      }

      cout<< mapped;
    }

    cout<<endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//  freopen("./input.txt", "r", stdin);

  solve();

  return 0;
}

