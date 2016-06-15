//#Name: Anonta Haque #Problm:  
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include <utility>
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


void solve(void)
{
    int Tc;
    char str[SZ+10];
    char pat[SZ+10];
    int at[9999];
    int cc, len, patlen;
    cin>>Tc;
    cin.ignore();
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        cc= 0;
        cin>>str>> pat;
        
        patlen = strlen(pat);
        len = strlen(str);
        
        for(int i= 0, j; i+patlen-1< len; i++){
            for(j= 0; i+j<len && j<patlen; j++){
                if(str[i+j] != pat[j]){
                    break;
                }
            }
            
            if(j == patlen){
                at[cc] = i+1;
                cc++;
            }
        }
        
        if(cc == 0){
            cout<< "Not Found\n" <<endl;
        }
        else{
            cout<< cc <<"\n";
            for(int i= 0; i<cc; i++){
                cout<< at[i] <<" ";
            }
            cout<< "\n"<<endl;
        }
        
    }
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
