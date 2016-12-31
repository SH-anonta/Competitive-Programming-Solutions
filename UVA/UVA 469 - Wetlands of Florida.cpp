#include <iostream>
#include <cstring>

using namespace std;

string g[105];

int vis;
int R, C;

#define  SS cout<< "AAAAAAAAAAAAAAAAAAa" <<endl;
#define DD(x) cout<< #x <<">>: " << x<<endl;

bool stat[105][105];
void dfs(int x, int y){
    if(x >= R || x < 0 || y >= C || y < 0 || stat[x][y] == true || g[x][y] == 'L') return;
    vis++;
//    DD(x << " " << y)
    stat[x][y]= true;

    dfs(x+1, y);
    dfs(x, y+1);
    dfs(x-1, y);
    dfs(x, y-1);
    dfs(x+1, y+1);
    dfs(x+1, y-1);
    dfs(x-1, y+1);
    dfs(x-1, y-1);

}

int main(){
    int t;
    string dump;

    int r= 0, x, y;
    cin>>t;
    cin.ignore();
    getline(cin, dump);

    while(t--){
        r= 0;
        char ch;
        while(1){
            ch= cin.peek();
            if(ch >= '0' && ch <= '9') break;
            cin>>g[r];
            cin.ignore();
            r++;
        }

        R= r;
        C= g[0].size();

        while(1){
            vis= 0;

            ch= cin.peek();

            if(ch < '0' || ch > '9') break;

            memset(stat, 0, sizeof(stat));
            cin>>x>>y;
            cin.ignore();
            dfs(x-1, y-1);

            cout<< vis <<endl;

        }
        if(t != 0) cout<<endl;

    }
    return 0;
}
