//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

const int sss= 1E6;

int occ[300];

void solve(){
    string s;
    int q;

    char ch;
    int com, idx;

    cin>>s>>q;

    for(int i= 0; s[i]; i++){
            occ[s[i]]++;
        }
    while(q--){
        cin>>com;



        if(com == 1){
            cin>>idx>>ch;

            occ[s[idx]]--;
            occ[ch]++;
            s[idx]= ch;

        }
        else if(com == 2){
            cin>>ch;
            cout<<   occ[ch]<<endl;
        }
    }

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("D:/input.txt", "r", stdin);
    solve();

    return 0;
}
