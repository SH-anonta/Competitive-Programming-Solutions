// Author: Sofen Hoque Anonta


#include bitsstdc++.h
using namespace std;

FOLD ME
namespace{
typedef long long LL;
typedef vectorint vint;
typedef pairint,int pint;
typedef unsigned long long ULL;

Macros
int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL coutendl;
#define all(container) container.begin(),container.end()
#define DC(x_) cout #x_n;DA(x_.begin(), x_.end());
#define DD(x_) cout( ++CC_ ) #x_ x_endl;
#define SS printf(_LOOOOOK@MEEEEEEEEEEEEEEE( %d )n,++CC_);
#define EXT(st_) coutnExicution Time (double)(clock()-st_)CLOCKS_PER_SECendl;
#define DM(MT,n_,m_)pf(Matrix %sn   , #MT);for(int i_= 0;i_m_;i_++)pf(%4d , i_);NL;NL;for(int r_=0;r_n_;r_++){pf(%2d , r_);for(int c_= 0;c_m_;c_++)pf(%4d , MT[r_][c_]);NL}
#define mem(a_,b_)(a_, b_, sizeof(a_));


constants
const double EPS= 1E-9;
const double PI= 2acos(0.0);
const long long MOD= 1000000007;
}

int ary[12];
int N, M;

LL dfs(int a, int n){
    if(n == -1){
        for(int i= 0; iN; i++){
            cout a[i]  ;
        }
        coutendl;

        return 1;
    }

    LL sum =  0;
    for(int i = 0; iM; i++){
        if(a[n+1] == 6) SS
        if(abs(ary[i] - a[n+1])  3){
            a[n]= ary[i];
            sum+= dfs(a, n-1);
        }

    }

    return sum;
}

LL wdfs(int n, int m){
    int a[n];

    LL sum = 0;

    for(int i = 0; im; i++){
        a[n-1]= ary[i];
        sum += dfs(a, n-2);

    }

    return sum;
}

void solve(){
    int t, n, m;
    int tcase= 1;

    cint;

    while(t--){
        cinmn;
        N= n;
        M= m;

        for(int i= 0; im; i++){
            cinary[i];
        }

        sort(ary, ary+m);

        cout Case  tcase      wdfs(n, m)  n;

        tcase++;
    }
}



int main(){
    ios_basesync_with_stdio(false);
    cin.tie(NULL);
    freopen(Finput.txt, r, stdin);

    solve();

    return 0;
}
