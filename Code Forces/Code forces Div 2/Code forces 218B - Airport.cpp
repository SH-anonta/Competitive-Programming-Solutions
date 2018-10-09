// Author: Sofen Hoque Anonta  #Problm:
#include <iostream>
#include <cstdio>
#include <climits>
#include <map>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#include <utility>
#include <string>

//using namespace std;

using namespace std;

namespace {
typedef long long LL;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;

int CC_;
#define sf scanf
#define pf printf
#define PP cin.get();
#define NL cout<<endl;

template <class T>void DA(T i,T e){while(i!=e){cout<<"Con>>( "<<++CC_<<" ) "<<*i++<<endl;}}
template <class T>void DA(T* x, int l){for(int i=0; i<l;i++)cout<<"["<<i<<"]>> "<<x[i]<<endl;}
#define DC(x_) cout<<">>> "<<#x_<<"\n";DA(x_.begin(), x_.end());
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);

const double EPS= 1E-9;
const double PI= 2*acos(0.0);
const long long MOD= 1000000007;

}

struct Point{
public:

    int x;
    int y;

    Point(){
        x=0;
        y=0;
    }
};

int linearSeries(int n){
    return (n*(n+1))/2;
}

int getLeastProfit(int n, int m, int planes[]){
    int profit = 0;
    for(int i= 0; i<m && n>0; i++){
        if(planes[i] > n){
            profit += linearSeries(planes[i]) - linearSeries(planes[i]-n);
        }
        else{
            profit += linearSeries(planes[i]);
        }

        n-= planes[i];
    }

    return profit;
}

int getMostProfit(int n, int m, int planes[]){
    int total = 0;
    int profit = 0;

    for(int i= 0; i<m; i++){
        total += planes[i];
    }

//    while(n > 0){
//        for(int i= 0; i<m && n > 0; i++){
//            if(planes[i] == 0){
//                continue;
//            }
//
////            cout<< "> "<< planes[i] << " " << n <<endl;
//            profit+= planes[i];
//            planes[i]--;
//            n--;
//        }
//    }

    priority_queue<int> seats;
    for(int i= 0; i<m; i++){
            seats.push(planes[i]);
    }

    int temp;
    while(n > 0){
        temp = seats.top();
        seats.pop();
        profit+= temp;
        if(temp > 1){
            seats.push(temp-1);
        }

        n--;
    }

    return profit;
}

void solve(){
    int planes[1000];
    int n,m;

    int mn= 0, mx= 0;

    cin>>n>>m;

    for(int i= 0; i<m; i++){
        cin>>planes[i];
    }

    sort(planes, planes+m);

    mn = getLeastProfit(n, m, planes);

    // reverse the ascendingly sorted array
    for(int i= 0, limit= m/2; i<= limit; i++){
        swap(planes[i], planes[m-i-1]);
    }

    mx = getMostProfit(n, m, planes);


    cout<< mx << " " << mn <<endl;

}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("F:/input.txt", "r", stdin);

    solve();


    return 0;
}
