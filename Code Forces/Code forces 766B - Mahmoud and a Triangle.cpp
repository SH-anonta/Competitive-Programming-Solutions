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


//constants
const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

template <class T>void DA(T i,T e){while(i!=e){cout<<"Con>>( "<<++CC_<<" ) "<<*i++<<endl;}}
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<endl;}
template <class T>inline void sary(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
bool comp(const int a,const int b){return a>b;}
}

const int sss= 1E6;

int a[100005];

void dumm(int n){
    int x, y,z;
    for(int i= 0; i<n; i++){
        x= a[i];
        for(int j= i+1; j<n; j++){
            y= a[j];
            for(int k= j+1; k<n; k++){
                z= a[k];
                if(x + y > z && y+z > x && x+z > y){
                    cout<< "found: "<< x <<" "<< y<< " "<< z<<endl;
                    return;
                }
            }
        }
    }
    
    cout<< "Not found"<<endl;
}
void solve(void){
    int n;
    
    cin>>n;
    sary(a, a+n);
    sort(a, a+n);
    
    
//    dumm(n);
    
    int x, y,z;
    for(int i= 0; i<n; i++){
        x= a[i];
        for(int j= i+1; j<n; j++){
            y= a[j];
            for(int k= j+1; k<n; k++){
                z= a[k];
                if(z >= x+y) break;
                if(y+z > x && x+z > y){
                    cout<< "YES"<<endl;
                    return;
                }
            }
        }
    }
    
    cout<< "NO" <<endl;
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//  freopen("D:/input.txt", "r", stdin);
    solve();
    
    return 0;
}
