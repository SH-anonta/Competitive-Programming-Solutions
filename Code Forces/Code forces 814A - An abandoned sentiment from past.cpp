//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;


bool comp(const int a,const int b){return a>b;}

const int sss= 1E6;

int a[300];
int ak[300];
void solve(){
    int k,n;
    cin>>n>>k;

    for(int i= 0; i<n; i++){
        cin>>a[i];
    }

    for(int i= 0; i<k; i++){
        cin>>ak[i];
    }

    sort(ak, ak+k, comp);

    int j= 0;
    for(int i= 0; i<n; i++){
        if(a[i] == 0){
            a[i]= ak[j];
            j++;
        }
    }

//    for(int i= 0; i<n; i++){
//        cout<< i <<": "<< a[i] <<endl;
//    }

    for(int i= 1; i<n; i++){
        if(a[i-1] >= a[i]){
            cout<< "yes" <<endl;
            return;
        }
    }

    cout<< "no" <<endl;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("D:/input.txt", "r", stdin);
    solve();

    return 0;
}
