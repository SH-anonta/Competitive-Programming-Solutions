 Author Sofen Hoque Anonta  #Problm
#include iostream
#include sstream
#include cstdio
#include climits
#include map
#include vector
#include cmath
#include queue
#include algorithm
#include utility
#include string
#include cstring

using namespace std;

namespace {
typedef long long LL;
typedef vectorint vint;
typedef pairint,int pint;
typedef unsigned long long ULL;

int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL coutendl;

template class Tvoid DA(T i,T e){while(i!=e){coutCon( ++CC_ ) i++endl;}}
template class Tvoid DA(T x, int l){for(int i=0; il;i++)cout[i] x[i]endl;}
#define DC(x_) cout #x_n;DA(x_.begin(), x_.end());
#define DD(x_) cout( ++CC_ ) #x_ x_endl;
#define SS printf(_LOOOOOK@MEEEEEEEEEEEEEEE( %d )n,++CC_);

int ABS(int n){
    return n  0  -1n  n;
}
const double EPS= 1E-9;
const double PI= 2acos(0.0);
const long long MOD= 1000000007;

}

int rmap[200005];
int arr[200005];

void solve(){
    int n;
    scanf(%d, &n);

    for(int i= 0; in; i++){
        scanf(%d, &arr[i]);
        cinarr[i];
        rmap[arr[i]] = i;
    }

    int m, upto= -1;
    for(int i= 0; in; i++){
        cinm;
        scanf(%d, &m);

        int taken = rmap[m]-upto;

        if(taken  0){
            taken = 0;
        }

        cout taken   ;
        printf(%d , taken);

        upto = max(upto, rmap[m]);
    }

}




int main(){

    ios_basesync_with_stdio(false);
    cin.tie(NULL);
    freopen(Finput.txt, r, stdin);


    solve();

    return 0;
}