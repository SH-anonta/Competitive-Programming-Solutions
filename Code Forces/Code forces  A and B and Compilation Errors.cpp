#include <iostream>

using namespace std;
int main(void){

    int n, sum1= 0, sum2= 0, sum3= 0, temp;
    cin>>n;

    for(int i= 0; i<n; i++){
        cin>>temp;
        sum1+= temp;
    }

    for(int i= 0; i<n-1; i++){
        cin>>temp;
        sum2+= temp;
    }

    for(int i= 0; i<n-2; i++){
        cin>>temp;
        sum3+= temp;
    }


    cout<< sum1-sum2 <<"\n" << sum2 - sum3 <<"\n";
    return 0;
}
