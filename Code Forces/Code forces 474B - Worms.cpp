#include <iostream>

using namespace std;

typedef pair<int,int> pint;
int a[100005];
pint p[200050];

int find(int t, int n){
    int l, r, m;
    
    l= 0, r= n;
    
    while(1){
        m= (l+r)/2;
        if(p[m].first <= t  && p[m].second >= t) {
            return m+1;
        }
        
        if(p[m].first > t) r= m;
        else l= m;
    }
}

int main(){
    int n, m;
    cin>>n;
    int l=1;
    
    for(int i= 0; i<n; i++){
        cin>>a[i];
        p[i].first= l;
        p[i].second= l+a[i]-1;
        l= l+a[i];
        
//        cout<< p[i].first << " " << p[i].second <<endl;
    }

    cin>>m;
    
    int q;
    while(m--){
        cin>>q;
        
        cout<< find(q, n) <<endl;
    }
    
    
    return 0;
}