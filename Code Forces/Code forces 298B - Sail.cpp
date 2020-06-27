// Author: Sofen Hoque Anonta  #Problm:
#include <iostream>
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

//using namespace std;

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

const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

}


void solve(){

    int a,b,x,y,n;
    string s;

    cin>>n>>a>>b>>x>>y;
    cin>>s;


    int l, r,u,d;
    l= r= u= d= 0;

    r = x-a;
    l = a-x;
    u = y-b;
    d = b-y;

    l = l < 0 ? 0 : l;
    r = r < 0 ? 0 : r;
    u = u < 0 ? 0 : u;
    d = d < 0 ? 0 : d;

    int mn=0;

    int t = 0;
    bool flag = false;
    int len = s.size();

    for(int i= 0; i<len; i++){
        t++;

        char ch = s[i];
        if(ch == 'S' && d != 0){
            d--;
        }
        else if(ch == 'N' && u != 0){
            u--;
        }
        else if(ch == 'W' && l != 0){
            l--;
        }
        else if(ch == 'E' && r != 0){
            r--;
        }

        if(l == 0 && r == 0 && u == 0 && d == 0){
            flag = true;
            break;
        }
    }

    cout<< (flag ? t : -1) <<endl;
}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

//    while(true)
    solve();


    return 0;
}
