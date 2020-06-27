// Author: Sofen Hoque Anonta  #Problm:
#include <iostream>
#include <sstream>
#include <cstdio>
#include <climits>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>

using namespace std;

namespace {
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL cout<<endl;

template <class T>void DA(T i,T e){while(i!=e){cout<<"Con>>( "<<++CC_<<" ) "<<*i++<<endl;}}
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<endl;}
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);

int ABS(int n){
    return n < 0 ? -1*n : n;
}
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

}

bool isValidCell(int x, int y){
    return  x>0 && x <9 && y > 0 && y < 9;
}

void solve(){
    string str;
    cin>>str;

    int row = str[1]-'0';
    int col = 1+str[0]-'a';

    int xmove[] = {0,1,1,-1, 0,-1,-1, 1};
    int ymove[] = {1,0,1,-1,-1, 0, 1,-1};

    int cc = 0;
    for(int i= 0; i<8; i++){
        int nx = row+xmove[i];
        int ny = col+ymove[i];

        if(isValidCell(nx, ny)){
            cc++;
        }
    }

    cout<< cc <<endl;

}


int main(){

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("./inp.txt", "r", stdin);

//    while(1)
    solve();

    return 0;
}
