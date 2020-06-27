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

int tenPow(int n){
    int product = 1;
    while(n--){
        product *= 10;
    }

    return product;
}

int freq[7];

void solve(){
    int n;
    cin>>n;

    int N= n;

    int m = 1000000;


    while(n > 0){
        if(n >= m){
            n-= m;
            freq[(int)log10(m)]++;
        }
        else{
            m /= 10;
        }
    }

    vint subs;
    n= N;

    while(n > 0){
        int subtractor= 0;
        for(int i= 6; i>= 0; i--){
            if(freq[i] > 0){
                subtractor+= tenPow(i);
                freq[i]--;
            }
        }

        if(subtractor > 0){
            subs.push_back(subtractor);
            n -= subtractor;
        }
    }

    cout<< subs.size() <<endl;
    for(int val : subs){
        cout<< val <<" ";
    }
    cout<<endl;

}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

//    while(true)
    solve();

    return 0;
}
