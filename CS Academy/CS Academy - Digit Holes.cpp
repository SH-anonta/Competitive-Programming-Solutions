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


int holes(int n){
    int cc =0;
    int digit;

    if(n == 0){
        return 1;
    }

    while(n){
        digit = n%10;

        if(digit == 0 || digit == 6 || digit == 9){
            cc++;
        }
        else if(digit == 8){
            cc+= 2;
        }

        n /= 10;
    }

    return cc;
}

void solve(){
    int a, b;

    cin>>a>>b;

    int mx = 0;
    int mxnum= a;

    while(a<=b){
        int h = holes(a);

        if(h > mx){
            mx = h;
            mxnum = a;
        }
        else if(h == mx){

            mxnum = min(mxnum, a);
        }

        a++;
    }

    cout<< mxnum <<endl;
}

int main(){

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

//    while(1)
    solve();

//    DD(reverseNum(197))

    return 0;
}
