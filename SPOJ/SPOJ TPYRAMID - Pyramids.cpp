/#Name: Anonta Haque #Problm:

#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long L;                  //"%ld"
typedef long long LL;            //"%lld"
typedef long double LD;          //"%lf"
typedef unsigned int UI;         // "%u"
typedef unsigned long  UL;       //"%lu"
typedef unsigned long long ULL;  //"%llu"


short COUNT_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define read2(x_,y_) sf("%d%d",&x_,&y_)
#define LOOP(x_) for(int ix= 0; ix<x_; ix++)
#define arySZ(x_) sizeof(x_)/sizeof(x_[0])  //(array must be in scope)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

void pir(int n){

    for(int i= 0; i<n; i++){
        for(int j= n - i; j>1; j--){
            cout<<" ";
        }
        for(int k= 0; k< i; k++){
            cout<<"*";
        }
        for(int m= 0; m<= i; m++){
            cout<<"*";
        }
        NL
    }
}

void rev(int n){
    for(int i= 0; i<n; i++){
        for(int j= 0; j<i; j++){
            cout<<" ";
        }
        for(int k= n-i; k>1; k--){
            cout<<"*";
        }
        for(int m= n-i; m>0; m--){
            cout<<"*";
        }
        NL
    }
}
void solve(void)
{
    int T, n, t;

    read(T);
//    while(sf("%d", &n) == 1)
    for(int tst= 1; tst<=T; tst++)
    {
        cin>>n>>t;

        if(t == 1){
            pir(n);
        }
        else rev(n);


    }

}



int main(void)
{
    solve();


    return 0;
}