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

int order[105];

void solve() {
  int cc= 0;

  int n;

  cin>> n;

  deque<int> tasks;


  int val;
  for(int i=0; i<n; i++) {
    cin>>val;
    tasks.push_back(val);
  }

  for(int i=0; i<n; i++) {
    cin>>order[i];
  }


  int target;
  for(int i= 0; i<n; i++) {
    target = order[i];

    while(target != tasks.front()) {
      tasks.push_back(tasks.front());
      tasks.pop_front();
      cc++;
    }

    cc++;
    tasks.pop_front();
  }

  cout<< cc <<endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//  freopen("./input.txt", "r", stdin);

  solve();

  return 0;
}

