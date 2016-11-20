#include <iostream>
#include <map>
#include <vector>
#include <string>
 
 
using namespace std;
 
vector<int> g[10009];
//vector<string> order;
map<string, int> refer;
char stat[10009];
 
bool hascyc(int n){
    if(stat[n] == 'b') return false;
    if(stat[n] == 'g') return true;
 
    stat[n]= 'g';
 
    int len= g[n].size();
    for(int i= 0; i<len; i++){
        if(hascyc(g[n][i]) == true) return true;
    }
 
    stat[n]= 'b';
 
    return false;
}
 
int main(){
 
    int T, CASE= 1, n;
    string s, t;
    cin>>T;
 
    while(T--){
        cin>>n;
        refer.clear();
        int id= 1;
        for(int i= 0; i<n; i++){
            cin>>s>>t;
            if(refer[s] == 0){
                refer[s]= id;
                stat[id]= 'w';
                g[id].clear();
                id++;
            }
            if(refer[t] == 0){
                refer[t]= id;
                stat[id]= 'w';
                g[id].clear();
                id++;
            }
 
            int u= refer[s] , v= refer[t];
 
            g[u].push_back(v);
        }
 
        bool hasc= false;
 
        for(int i= 1; i<id; i++){
            if(stat[i] == 'w'){
                hasc= hascyc(i);
                if(hasc == true) break;
            }
        }
 
        cout<< "Case "<< CASE++ <<": "<< ((hasc)? "No":"Yes") <<endl;
 
    }
 
    return 0;
}