#include <iostream>

using namespace std;

void solve() {
  string s;
  cin>>s;

  int i = 0;
  int l = s.size();

  int firstOneIdx = s.find('1');
  int lastOneIdx = s.find_last_of('1');

  if(firstOneIdx == string::npos) {
    cout<< 0 <<endl;
    return;
  }

  i = firstOneIdx+1;
  l = lastOneIdx-1;

  int cc = 0;
  while(i <= l) {
    if(s[i] == '0') {
      cc++;
    }

    i++;
  }

  cout<< cc <<endl;
}

int main() {
  int n;
  cin>> n;


  while(n--) {
    solve();
  }


  return 0;
}


