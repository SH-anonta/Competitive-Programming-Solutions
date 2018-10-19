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

string grid[105];
bool visited[105][105];

string pattern= "ALLIZZWELL";

int P = pattern.size();
int R,C;

int validCell(int x, int y){
    return x >= 0 && x < R && y >= 0 && y <C;
}

int xmoves[]= { 0, 1, 0, -1,  -1, 1, -1,  1};
int ymoves[]= {-1, 0, 1,  0,   1, 1, -1, -1};

bool patternFound(int x, int y, int p){
    if(p == P-1 && pattern[p] == grid[x][y]){
        return true;
    }

    if(pattern[p] != grid[x][y]){
        return false;
    }

    for(int i= 0; i<8; i++){
        int nx = x+xmoves[i];
        int ny = y+ymoves[i];
        bool found= false;

        if(validCell(nx, ny) && !visited[nx][ny]){
            visited[nx][ny]= true;
            found = patternFound(nx, ny, p+1);
            visited[nx][ny]= false;

            if(found){
                return true;
            }
        }
    }

    return false;
}

void solve(){
    int t, r,c;

    cin>>t;

    while(t--){
        cin>>r>>c;
        R= r;
        C= c;

        memset(visited, 0, sizeof(visited));

        for(int i=0; i<r; i++){
            cin>>grid[i];
        }


        bool flag= false;
        for(int i=0; i<r; i++){
            for(int j= 0; j<c; j++){
                flag = patternFound(i, j, 0);

                if(flag){
                    break;
                }
            }

            if(flag){
                break;
            }
        }

        cout<< (flag ? "YES" : "NO") <<endl;
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
