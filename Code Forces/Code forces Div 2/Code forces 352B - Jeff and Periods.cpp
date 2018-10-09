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

int last[100005];
int dist[100005];
int arr[100005];


void solve(){
    int n;

    cin>>n;

    memset(last, -1, sizeof(last));
    memset(dist, 0, sizeof(dist));

    int val;
    int mx = 0;

    for(int i= 0; i<n; i++){
        cin>>val;
        mx = max(val, mx);
        arr[i]= val;

        if(last[val] == -1){
            last[val] = i;
        }
        else if(dist[val] == 0){
            dist[val] = i-last[val];
            last[val]= i;
        }
        else if(dist[val] ==  i-last[val]){
            last[val]= i;
        }
        else{
            // val is black listed
            dist[val]= -2;
        }

    }

//    for(int i= 0; i<=mx; i++){
//        DD(dist[i])
//    }
//
//    for(int i= 0; i<=mx; i++){
//        DD(last[i])
//    }
    int cc = 0;

    for(int i= 0; i<=mx; i++){
        if(dist[i] >= 0 && last[i] != -1){
            cc++;
        }
    }
    cout<< cc <<endl;

    for(int i= 0; i<=mx; i++){
        if(dist[i] >= 0 && last[i] != -1){
            cout<< i << " " << dist[i] <<endl;
        }
    }


}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

    solve();


    return 0;
}
