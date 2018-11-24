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

string grid[105];

int xmoves[]= {1, -1, 0, 0};
int ymoves[]= {0, 0, 1, -1};
int N;

bool hasEvenOs(int r, int c){

    int zeros= 0;
    for(int i= 0; i<4; i++){
        int nr= r+xmoves[i];
        int nc= c+ymoves[i];
        if(nr >= 0 && nr < N && nc >= 0 && nc < N && grid[nr][nc]== 'o'){
            zeros++;
        }
    }

//    DD(zeros)
    return zeros%2 == 0;
}

void solve(){
    int n;
    cin>>n;
    N= n;

    for(int i= 0; i<n; i++){
        cin>>grid[i];
    }

    int cc= 0;
    for(int i= 0; i<n; i++){
        for(int j= 0; j<n; j++){
            if(hasEvenOs(i, j)){
                cc++;
            }
        }
    }

    cout<< (cc == n*n ? "YES" : "NO") <<endl;
}

int main(){

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("./inp.txt", "r", stdin);

//    while(1)
    solve();

    return 0;
}
