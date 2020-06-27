#include <iostream>
#include <queue>

using namespace std;

queue<char> q;
int main(void)
{
    int n;
    string s;
    int r, d, rr, dd;
    r= d= rr= dd= 0;
    char u;
    
    cin>>n>>s;
    
    for(int i= 0; i<n; i++){
        if(s[i] == 'D')d++;
        else r++;
        q.push(s[i]);
    }
    
    
    while(r > 0 && d > 0){
        u= q.front();
        q.pop();
        
        if(u == 'D'){
            if(dd == 0){
                r--;
                rr++;
                q.push(u);
            }
            else dd--;
        }
        else{
            if(rr == 0){
                d--;
                dd++;
                q.push(u);
            }
            else rr--;
        }
    }
    
    cout<< ((r > d)? "R":"D") <<endl;
    
    return 0;
}