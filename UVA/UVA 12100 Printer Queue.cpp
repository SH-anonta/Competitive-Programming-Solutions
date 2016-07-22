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
#define NL cout<<"\n";
#define PP getchar();
#define pque priority_queue
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
    int n, m;
    
    cin>>Tc;
    cin.ignore();

    deque<pair<int, bool>> jobs;
    pair<int, bool> cjob, myjob;
    
    for(int Case= 1; Case<=Tc; Case++)
    {
        jobs.clear();
        cin>>n>>m;
        for(int i= 0; i<n; i++){
            cin>>cjob.first;
            cjob.second= false;
            if(i == m){
                cjob.second= true;
                myjob = cjob;
            }
            
            jobs.push_back(cjob);
        }
        
        
        int cc= 0;
        while(!jobs.empty()){
            bool take= true;
            deque<pair<int, bool>>::iterator j= jobs.begin(), current= jobs.begin(), nd= jobs.end();
            while(j != nd){
                if(current->first < j->first){
                    take= false;
                    jobs.push_back(*current);
                    jobs.pop_front();
                    break;
                }
                j++;
            }
            
//            DD(*current)
            if(take){
                cc++;
                if(*current == myjob) break;
                jobs.pop_front();
            }
            
            
        }
        
        cout<< cc <<endl;
        
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
