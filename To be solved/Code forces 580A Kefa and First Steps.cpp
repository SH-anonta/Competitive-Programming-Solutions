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

void solve(void)
{
    cin.tie(NULL);
    int Tc;
    int n;
    
    cin>>n;
    
    const int sz= n+10;
//    LL* ary = new LL[n+10];
    LL ary[sz];
    
    for(int i = 0; i<n; i++){
//        sf("%l l d", &ary[i]);
        cin>>ary[i];
    }
    
//    DA(ary, n);
    int mx= 0, temp;
    
    for(int i= 0; i<n; i++){
        temp = 1;
        for(int j= i; j<n-1; j++){
            if(ary[j] <= ary[j+1]) temp++;
            else break;
        }
        
        if(mx<temp) mx = temp;
    }
    
    cout<< mx <<endl;
    
//    delete[] ary;
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    
    return 0;
}
