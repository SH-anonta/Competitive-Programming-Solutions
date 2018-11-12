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

bool grid[1001][1001];
bool visited[1001][1001];
int cluster[1001][1001];
int sizes[1000001];

int R, C;

bool isValidCell(int r, int c){
    return r< R && c < C && r >= 0 && c >= 0;
}

int dfs(int r, int c, const int id){
    if(!isValidCell(r,c) || visited[r][c] || grid[r][c] == 0){
        return 0;
    }

    visited[r][c]= true;
    cluster[r][c]= id;

    int n = dfs(r-1, c, id);
    int s = dfs(r+1, c, id);
    int e = dfs(r, c+1, id);
    int w = dfs(r, c-1, id);

    return 1+n+s+e+w;
}

int getMaxJoinShapeSize(int r, int c){
    int xm[] = {1, 0, -1, 0};
    int ym[] = {0, 1, 0, -1};

    int ar,ac;
    int sum = 0;

    set<int> used;
    for(int i= 0; i<4; i++){
        ar= r+xm[i];
        ac= c+ym[i];
        int cluster_id = cluster[ar][ac];

        if(isValidCell(ar,ac) && cluster_id != 0 && used.find(cluster_id ) == used.end()){
            sum+= sizes[cluster_id];
            used.insert(cluster_id);
        }
    }

    return sum+1;
}

void solve(){
    int n,m,temp;
    cin>>n>>m;

    R= n;
    C= m;

    for(int r= 0; r<n; r++){
        for(int c = 0; c< m; c++){
            cin>>temp;
            grid[r][c]= temp == 1;
        }
    }

    int cluster_id = 1;

    for(int r= 0; r<n; r++){
        for(int c = 0; c< m; c++){
            if(!visited[r][c]){
                int cells = dfs(r,c,cluster_id);
                sizes[cluster_id]= cells;
                if(cells > 0){
                    cluster_id++;
                }
            }
        }
    }


    int mx = 0;

    for(int r= 0; r<n; r++){
        for(int c = 0; c< m; c++){
            if(grid[r][c] == 0){
                mx = max(mx, getMaxJoinShapeSize(r,c));
            }
        }
    }

    cout<< mx <<endl;
}

int main(){

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

//    while(1)
    solve();

    return 0;
}
