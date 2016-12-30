#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
const double EPS = 1E-7;
double dd(double a, double b, double d){
    double y= sqrt(b*b - d*d);
    double z= sqrt(a*a - d*d);
    double h1= (z*y)/(z+y);
    return h1;
}
 
 
 
int main(){
    int t, ca= 1;
    double x, y, c, d, h1, h, l, m;
    cin>>t;
 
    while(t--){
        cin>>x>>y>>c;
 
        l= 0;
        h= fmin(x, y);
 
        for(int i= 0; i<50; i++){
            m= (l+h)/2;
            h1= dd(x, y, m);
 
            if(h1-c > EPS) l= m;
            else h= m;
        }
 
        printf("Case %d: %f\n", ca++, m);
//        cout<<"Case "<< ca++ <<": "<<   m <<endl;
    }
 
    return 0;
}