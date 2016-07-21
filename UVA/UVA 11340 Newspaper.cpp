//#Name: Anonta Haque #Problm:
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
#include <bitset>
#include <cctype>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define PP getchar();
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E6;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);


void solve(void){
    int Tc;
    int n, k, m;
    string ln;
    LL sum;
    
    cin>>Tc;
    cin.ignore();
    LL cm[300];
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        sum= 0;
        for(int i= 0; i<260; i++){
            cm[i]= 0;
        }
        
        cin>>k;
        char tempc;
        LL tempi;
        
        while(k--){
            cin>>tempc>>tempi;
            cm[tempc] = tempi;
        }
        
        int temp;
        cin>>m;
        cin.ignore();
        while(m--){
            getline(cin, ln);
            for(int i= 0; ln[i]; i++){
                temp = ln[i];
                if(temp >= 0 && temp <= 256)
//                    DD((char)cm[temp])
                    sum+= cm[temp];
            }
        }
        
//        sum= 110000000003;
//        cout<< (double) sum/100 << "$" <<endl;
        pf("%.2f$\n", (double) sum/100);
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    
    return 0;
}
