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
    double n, sum, terms, q, qq, qqq, atd, avg;
    
    cin>>Tc;
    cin.ignore();
    
    for(int Case= 1; Case<=Tc; Case++){
        sum = 0;
        
        cin>>terms;
        sum += terms;
        cin>>terms;
        sum += terms;
        cin>>terms;
        sum += terms;
        
        cin>>atd;
        sum += atd;
        
        cin>>q>>qq>>qqq;
        
        avg = q+qq+qqq;
        avg -= min(q, min(qq, qqq));
        avg /= 2;

        sum+= avg;
        
        char grade;
        
        if(sum<60)
            grade = 'F';
        else if(sum<60)
            grade = 'E';
        else if(sum<70)
            grade = 'D';
        else if(sum<80)
            grade = 'C';
        else if(sum<90)
            grade = 'B';
        else grade = 'A';
        
        
        pf("Case %d: %c\n", Case, grade);
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    
    return 0;
}
