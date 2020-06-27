#include <iostream>
#include <set>

using namespace std;

set<int> st;

int a[100005];
int b[100005];

int main(void){
    int n, m;
    cin>>n>>m;
    
    for(int i= 1; i<=n; i++){
        cin>>a[i];
    }
    
    for(int i= n; i> 0; i--){
        st.insert(a[i]);
        b[i]= st.size();
    }
    
    int q;
    while(m--){
        cin>>q;
        cout<<b[q] <<endl;
    }
    return 0;
}