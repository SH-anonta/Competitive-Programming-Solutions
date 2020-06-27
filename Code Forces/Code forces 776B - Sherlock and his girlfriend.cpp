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
template <class T>void tobin(T n,char*bin){int pos= 1<<((int)log2(n));while(pos>=1){if((n & pos)==0)*bin='0';else*bin='1';pos>>=1;bin++;}*bin='\0';}
template <class T>inline T LCM(T x,T y){return((x*y)/__gcd(x,y));}
LL todec(string& num, int b){LL dec=num[0]-(isupper(num[0])? 'A'-10: '0');for(int i=1;num[i];i++){if(num[i]>='A'&& num[i]<='Z')num[i]-='A'-10;else num[i]-='0';dec*= b;dec+= num[i];}return dec;}
LL bigMod(LL x, LL y, LL m){if(y == 0) return 1;LL p= bigMod(x, y/2, m)%m;p= (p*p)%m;return ((y&1)? (x*p)%m :p);}
ULL ncr(int n, int k){ULL res= 1;if(k>n-k)k= n-k;for(int i=0; i<k; i++){res *= n-i;res /= i+1;}return res;}
int phi(int n){int ret= n;for(int i= 2; i*i <= n; i++){if(n % i == 0){while(n%i == 0){n /= i;}ret -= ret/i;}}if(n > 1) ret -= ret/n;return ret;}
int egcd(int a, int b, int& x, int& y){if(a == 0){x= 0;y= 1;return b;}int x1, y1;int gcd= egcd(b%a, a, x1, y1);x= y1 - (b/a) * x1;y= x1;return gcd;}
bool comp(const int a,const int b){return a>b;}
}

const int sss= 100109;

int p[111111];
bool stat[111111];

void sieve(){
    int sq= sqrt(sss);
    
    for(int i = 3; i<= sq; i+= 2){
        if(stat[i] == 0){
            for(int j = i*i; j<= sss; j+= 2*i){
                stat[j]= 1;
            }
        }
    }
    
    
}

void solve(void){
    int n;
    
    cin>>n;
    
    if(n == 1){
        cout<< "1\n1"<<endl;
        return;
    }
    
    if(n == 2)cout<< "1" <<endl;
    else cout<< "2" <<endl;
    cout<< "1 ";
    
    for(int i= 3; i<=n+1; i++){
        cout<< ((stat[i] == 0 && (i & 1))? "1 " : "2 ");
    }
    
    cout<<endl;
    
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
//    DA(stat, 20);
//    freopen("D:/input.txt", "r", stdin);
    solve();
    
    
    return 0;
}