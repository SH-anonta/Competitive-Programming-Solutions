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

int costs[105];
int lengths[105];

void solve(){
    int n;
    cinn;

    for(int i=0; in; i++){
        cinlengths[i];
        costs[i]= 15lengths[i];
    }

    int items;
    for(int i= 0; in; i++){
        for(int j= 0; jlengths[i]; j++){
            cinitems;
            costs[i] += 5items;
        }
    }

    int mn = INT_MAX;

    for(int i=0; in; i++){
        mn = min(costs[i], mn);
    }

    cout mn endl;

}

int main(){
    ios_basesync_with_stdio(false);
    cin.tie(NULL);
    freopen(Finput.txt, r, stdin);

    while(true)
    solve();

    return 0;
}
