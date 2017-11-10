//#Name: Sofen Hoque Anonta  #Problm:
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int history[10005][2];

void solve(){
    long long l, m, z, inc;

    long long val;
    int tcase= 1;
    int cycle_len;
    while(cin>>z>>inc>>m>>l){
        if(z == 0 && inc == 0  && m == 0 && l == 0) break;
        val = l;
        int repeat= 0;
        int i= 0;

        while(true){
            if(history[val][0]){
                repeat= i;
                cycle_len= i - history[val][1];
                break;
            }

            history[val][0]= 1;
            history[val][1]= i;

            val = (z*val+inc)%m;
            i++;
        }

        printf("Case %d: %d\n", tcase, cycle_len);
        tcase++;
        memset(history, 0, sizeof(history));
    }
}

int main(){
//    freopen("F:/input.txt", "r", stdin);
    solve();

    return 0;
}
