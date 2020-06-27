//#Name: Sofen Hoque Anonta  #Problm:
#include <bits/stdc++.h>
using namespace std;

//FOLD ME
namespace{
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

//Macros
int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL cout<<endl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;
#define DM(MT,n_,m_)pf("Matrix %s:\n   ", #MT);for(int i_= 0;i_<m_;i_++)pf("%4d ", i_);NL;NL;for(int r_=0;r_<n_;r_++){pf("%2d ", r_);for(int c_= 0;c_<m_;c_++)pf("%4d ", MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));

}

const int sss= 1E6;


void solve(void){
    LL a,b,x,y, k;
    
    cin>>a>>b>>x>>y>>k;
    
    if(a >= x && b <= y){
        cout<< b-a+1 -((k >= a && k<=b)? 1 : 0)<<endl;
    }
    else if(x >= a && y <= b){
        cout<< y-x+1 -((k >= x && k<=y)? 1 : 0)<<endl;
    }
    else if(a <= y && b >= y){
        cout<< y-a+1 -((k >= a && k<=y)? 1 : 0)<<endl;
    }
    else if(a <= x && b >= x){
        cout<< b-x+1 -((k >= x && k<=b)? 1 : 0)<<endl;
    }
    else{
        cout<< 0 <<endl;
    }

}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("D:/input.txt", "r", stdin);
    solve();
    
    return 0;
}
