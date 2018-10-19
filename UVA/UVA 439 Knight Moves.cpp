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

bool visited[8][8];
int dist[8][8];

int xmoves[]= {1,  2, 2, 1, -1, -2,  2, -1};
int ymoves[]= {-2,-1, 1, 2,  2,  1, -1, -2};

bool isValidMove(int x, int y){
    return x >= 0 && x <8 && y >= 0 && y <8;
}

int shortestPathLength(int ax, int ay, int bx, int by){
    queue<pint> q;

    memset(visited, 0, sizeof(visited));
    memset(dist, -1, sizeof(dist));

    q.push(pint(ax,ay));
    visited[ax][ay] = true;
    dist[ax][ay] = 0;

    while(!q.empty()){
        pint current = q.front();
        q.pop();

        for(int i= 0; i<8; i++){
            int nx= current.first+xmoves[i];
            int ny= current.second+ymoves[i];

            if(isValidMove(nx, ny) && !visited[nx][ny]){
                visited[nx][ny] = true;
                dist[nx][ny] = dist[current.first][current.second]+1;

                q.push(pint(nx, ny));
            }
        }
    }


//    for(int i=0; i<8; i++){
//        for(int j=0; j<8; j++){
//            cout<< dist[i][j] <<" ";
//        }
//        cout<<endl;
//    }

    return dist[bx][by];
}

void solve(){
    string first, last;

    while(cin>>first>>last){
        int ar = first[1]-'0'-1;
        int ac = (8-(first[0]-'a'))-1;

        int br = last[1]-'0'-1;
        int bc = (8-(last[0]-'a'))-1;


//        DD(ar <<" "<< ac)
//        DD(br << " "<< bc)

        int mn= shortestPathLength(ar,ac, br,bc);
        mn = min(mn, shortestPathLength(br,bc, ar,ac));

        printf("To get from %s to %s takes %d knight moves.\n", first.c_str(), last.c_str(), mn);
    }

}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

//    while(true)
    solve();


    return 0;
}
