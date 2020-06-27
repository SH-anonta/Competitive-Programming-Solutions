#include <iostream>

using namespace std;

int tri(int* a){
//    for(int i= 0; i<4; i++){
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
    
    
    if(a[0] < a[1]+a[2] && a[1] < a[0]+a[2] && a[2] < a[1]+a[0]) return 1;
    if(a[0] == a[1]+a[2] || a[1] == a[0]+a[2] || a[2] == a[1]+a[0]) return 0;
    return -1;
}

int main(void)
{
    int a[4];
    for(int i= 0; i<4; i++)cin>>a[i];
    
    
    bool triang= false, seg= false;
    int stat;
    
    for(int i= 0; i<3; i++){
        swap(a[i], a[3]);
        stat= tri(a);
        swap(a[i], a[3]);
        
        if(stat == 1){
            triang= true;
            break;
        }
        if(stat == 0){
            seg= true;
        }
    }
    
    stat= tri(a);
    if(stat == 1){
        triang= true;
    }
    if(stat == 0){
        seg= true;
    }
    
    if(triang) cout<< "TRIANGLE" <<endl;
    else if(seg) cout<< "SEGMENT" <<endl;
    else cout<< "IMPOSSIBLE" <<endl;
    
    return 0;
}