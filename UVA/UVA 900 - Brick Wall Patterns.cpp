#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;


typedef long long LL;
typedef unsigned long long ULL;

short CC_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define dcc (double)
#define PP getchar();
#define SS printf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++CC_);
#define DD(x_) cout<<">>>>( "<<++CC_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;


int main(){
    int n;
    int ary[60];

    ary[1]= 1;
    ary[2]= 2;
    for(int i= 3; i<=50; i++)
    {
        ary[i]= ary[i-1]+ary[i-2];
    }

    while(cin>>n){
        if(n == 0) break;
        cout<<ary[n] <<endl;
    }


    return 0;
}



