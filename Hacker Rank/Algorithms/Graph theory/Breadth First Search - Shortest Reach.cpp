#include <iostream>
#include <queue>
#include <cstring>


using namespace std;

vector<int> nodes[1005];

int dist[1005];
bool visited[1005];
int N;

void bfs(int start){
    for(int i= 1; i<=N+3; i++){
        dist[i]= -1;
        visited[i]= false;
    }
    queue<int> q;

    dist[start]= 0;
    q.push(start);
    visited[start]= true;

    int x, len, u;

    while(!q.empty()){
        x= q.front();
        q.pop();
        len = nodes[x].size();
        visited[x]= true;
        for(int i= 0; i<len; i++){
            u= nodes[x][i];
            if(visited[u] == false){
                q.push(u);
                dist[u]= dist[x]+1;
                visited[u]= true;
            }
        }
    }
}

/*
1
4 2
1 2
1 3
1
*/
int main(void){
    int n, q, m, u, v,s;

    cin>>q;

    while(q--){
        cin>>n>>m;
        N= n;
        for(int i= 1; i<=n; i++){
            nodes[i].clear();
        }

        for(int i= 0; i<m; i++){
            cin>>u>>v;
            nodes[u].push_back(v);
            nodes[v].push_back(u);
        }
        cin>>s;

        bfs(s);

        for(int i= 1; i<=n; i++){
            if(i == s) continue;
            cout<< dist[i] * ((dist[i]!= -1) ? 6 : 1)<<" ";
        }
        cout<<endl;
    }


}
