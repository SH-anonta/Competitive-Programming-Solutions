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
#define endl "\n"
#define PP cin.get();
#define NL cout<<endl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;
#define DM(MT,n_,m_)pf("Matrix %s:\n   ", #MT);for(int i_= 0;i_<m_;i_++)pf("%4d ", i_);NL;NL;for(int r_=0;r_<n_;r_++){pf("%2d ", r_);for(int c_= 0;c_<m_;c_++)pf("%4d ", MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));


//constants
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;
}

const int sss= 1E6;

int a[200019];
void solve(void){
    int n;
    
    cin>>n;
    for(int i= 0; i<n; i++){
        cin>>a[i];
    }
    
    int lim= n/2;
    for(int i= 0, j= n-1; i<lim; i++, j--){
        if(i % 2 == 0) {
//            DD(i <<" "<<j)
            swap(a[i], a[j]);
        }
    }
    
    for(int i= 0; i<n; i++){
        cout<< a[i] <<" ";
    }
    NL;
            
    
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//  freopen("D:/input.txt", "r", stdin);
    solve();
    
    
    return 0;
}