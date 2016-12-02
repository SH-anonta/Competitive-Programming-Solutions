//topological sort using DFS
//given a DAG(Directed Acyclic Graph) find a topological sort

/*  sample input:
 * n vertix, m edges, m lines describe m directed edges
5 4
1 2
2 3
1 3
1 5

 */
#include <iostream>
#include <vector>
#include <stack>

bool visited[1000];
int in_degree[1000];
std::vector<int> graph[1000];
std::stack<int> topo_sort;

void topoSort(int n){
    if(visited[n] == true) return;
    
    visited[n]= true;
    int len= graph[n].size();
    
    for(int i= 0; i<len; i++){
        topoSort(graph[n][i]);
    }
    
    topo_sort.push(n);
}

int main(void){
    using namespace std;
    
    //n nodes and m directed edges
    //directed edge goes from node u to node v
    int n, m, u, v;
    
    cin>>n>>m;
    
    //preprocess
    while(!topo_sort.empty())topo_sort.pop();
    for(int i= 0; i<=n; i++){
        graph[n].clear();
        in_degree[i]= 0;
        visited[i]= false;
    }
    
    //input edges
    for(int i= 0; i<m; i++){
        cin>>u>>v;
        in_degree[v]++;
        graph[u].push_back(v);
    }
    
    //start traversal from nodes with no in degree edges
    for(int i= 1; i<=n; i++){
        if(in_degree[i] != 0 || visited[i] == true) continue;

        topoSort(i);
        
    }
    
    //output topological sort
    while(!topo_sort.empty()){
        cout<< topo_sort.top() <<" ";
        topo_sort.pop();
    }   
    cout<<endl;
    
    
    return 0;
}