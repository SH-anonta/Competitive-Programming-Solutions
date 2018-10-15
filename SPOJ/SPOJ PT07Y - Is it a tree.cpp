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

vint graph[10005];
bool visited[10005];

bool hasCycle(int n, int parent){
    if(visited[n]){
        return true;
    }

    visited[n]= true;

    int len = graph[n].size();
    for(int i=0; i<len; i++){
        if(graph[n][i] != parent){
            bool res = hasCycle(graph[n][i], n);
            if(res){
                return true;
            }
        }
    }

    return false;
}

void solve(){
    int n,m;
    cin>>n>>m;

    int u,v;

    for(int i=0; i<m; i++){
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }


    bool cycle_found = hasCycle(1, 1);

    bool connected = true;
    for(int i= 1; i<=n; i++){
        if(!visited[i]){
            connected= false;
            break;
        }
    }
    cout<< (!cycle_found && connected ? "YES" : "NO") <<endl;

}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

//    while(true)
    solve();


    return 0;
}
