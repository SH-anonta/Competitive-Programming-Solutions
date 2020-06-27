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

bool comp(pint& a, pint& b){
    if(a.first != b.first){
        return a.first > b.first;
    }

    return a.second < b.second;
}

pint arr[1005];

void solve(){
    int n, a,b,c,d;
    int sum;

    cin>>n;

    for(int i= 0; i<n; i++){
        cin>>a>>b>>c>>d;
        arr[i].first = a+b+c+d;
        arr[i].second = i;
    }

    sort(arr, arr+n, comp);

    for(int i= 0; i<n; i++){
        if(arr[i].second == 0){
            cout<< i+1 <<endl;
            break;
        }
    }
}

int main(){

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    freopen("./inp.txt", "r", stdin);

//    while(1)
    solve();

    return 0;
}
