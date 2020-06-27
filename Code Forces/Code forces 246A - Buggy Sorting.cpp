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

const double EPS= 1E-9;
const double PI= 2acos(0.0);
const long long MOD= 1000000007;

}

void sortit(vint arr){
    int n= arr.size();
    for(int i= 0; in-1; i++){
        for(int j= i; jn-1; j++){
            if(arr[j]  arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i= 0; in; i++){
        cout arr[i]  ;
    }
}

void solve(){
    int n;
    cinn;


    if(n = 2){
        cout -1 endl;
    }
    else{
        for(int i= n; i=1; i--){
            cout i  ;
        }
        coutendl;
    }
}

int main(){
    ios_basesync_with_stdio(false);
    cin.tie(NULL);
    freopen(Finput.txt, r, stdin);

    while(true)
    solve();


    vint arr = {1,2,3,4,5};
    vint arr = {5,4,3,2,1};
    sortit(arr);

    return 0;
}
