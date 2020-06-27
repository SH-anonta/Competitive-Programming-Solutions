#include <iostream>
#include <queue>

using namespace std;

int  dist[10006];
bool vis[10006];

int main(){
    int n, m;
    cin>>n>>m;
    queue<int> q;

    q.push(n);

    dist[n]= 0;
    vis[n]= 1;
    int cost= 0, cu;
    while(q.front() != m){
        cu= q.front();
        q.pop();


        if(cu != 0){
            if(!vis[cu-1]){
                q.push(cu-1);
                vis[cu-1]= 1;
                dist[cu-1]= dist[cu]+1;
            }
            
            if(cu<m && cu*2 < 10001 && !vis[cu*2]){
                vis[cu*2]= 1;
                dist[cu*2] = dist[cu]+1;
                if(m == 2* cu) break;
                q.push(cu*2);
                
            }

            
        }

    }

//    cout<<m<<endl;
    cout<< dist[m] <<endl;
    return 0;
}