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
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long long LL;            //"%lld"
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;  //"%llu"

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<'\n';
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);

void solve(void)
{
    int T, n, k, present;
    
    cin>>T;
    for(int tst= 1; tst<=T; tst++)
    {
        present= 0;
        cin>>n>>k;
        
        int temp;
        
        for(int i= 0; i<n; i++){
            cin>>temp;
            
            if(temp <= 0) present++;
        }
        
        if(present < k) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    
}



int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    

    return 0;
}



