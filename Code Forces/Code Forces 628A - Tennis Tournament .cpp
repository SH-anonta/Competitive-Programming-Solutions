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
    int m, k, b, t, matches= 0;
 
    cin>>m>>b>>t;
    
    t *= m;
    
    while(m!=1){
        k = floor(log2(m));
        k = 1<<k;
        
        matches += k/2;
        
        m = (k/2) + m-k;
    }
    
    b *= matches*2; //2 players for every 
    b += matches;   //1 bottle for judge in every match
    
    
    cout<< b <<" "<< t <<"\n";
}



int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    while(1){
    solve();
//    }
    

    return 0;
}



