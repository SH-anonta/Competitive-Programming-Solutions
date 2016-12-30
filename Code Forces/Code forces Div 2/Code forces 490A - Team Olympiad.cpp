#include <iostream>
#include <queue>

using namespace std;

queue<int> a, b, c;

int main(void)
{
    int n, ca, cb, cc, q;
    ca= cb= cc= 0;
    cin>>n;
    for(int i= 1; i<=n; i++){
        cin>>q;
        if(q == 1){
            ca++;
            a.push(i);
        }
        else if(q == 2){
            cb++;
            b.push(i);
        }
        else{
            cc++;
            c.push(i);
        }
    }

    int mn= min(ca, min(cb, cc));
    cout<< mn <<endl;
    
    while(mn--){
        cout<< a.front() << " "<< b.front() << " "<< c.front() <<endl;
        a.pop();
        b.pop();
        c.pop();
    }
    
    return 0;
}