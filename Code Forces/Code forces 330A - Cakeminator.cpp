// Author: Sofen Hoque Anonta  #Problm:
#include <iostream>
#include <sstream>
#include <cstdio>
#include <climits>
#include <map>
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


string grid[12];

void solve(){
    int r,c;

    cin>>r>>c;
    for(int i= 0; i<r; i++){
        cin>>grid[i];
    }

    int eaten_rows= r;
    int total= 0;

    for(int i= 0; i<r; i++){
        for(int j= 0; j<c; j++){
            if(grid[i][j] == 'S'){
                eaten_rows--;
                break;
            }
        }
    }

    total = c*eaten_rows;

    int eaten_cols = c;
    for(int i= 0; i<c; i++){
        for(int j= 0; j<r; j++){
            if(grid[j][i] == 'S'){
                eaten_cols--;
                break;
            }
        }
    }

    total += (r-eaten_rows)*eaten_cols;

    cout<< total <<endl;
}




int main(){

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

    while(true)
    solve();

    return 0;
}
