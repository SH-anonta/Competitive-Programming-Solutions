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
    int n;
    string s;

    cin>>n>>s;

    int a= 0, b= 0;
    for(char ch : s){
        if(ch == 'X'){
            a++;
        }
        else{
            b++;
        }
    }

    int ops= 0;

    if(a > n/2){
        for(int i= 0; i<n; i++){
            if(s[i] == 'X' && a > n/2){
                s[i]= 'x';
                a--;
                ops++;
            }
        }
    }
    else if(b > n/2){
        for(int i= 0; i<n; i++){
            if(s[i] == 'x' && b > n/2){
                s[i]= 'X';
                b--;
                ops++;
            }
        }
    }

    cout<< ops <<endl;
    cout<< s <<endl;

}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

//    while(true)
    solve();




    return 0;
}
