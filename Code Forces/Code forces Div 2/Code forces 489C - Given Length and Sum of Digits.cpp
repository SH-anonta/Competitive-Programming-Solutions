#include <iostream>
#include <string>

using namespace std;

int main(){
    int m, s;
    string n;
    cin>>m>>s;


    int sub= 9;
    if(s > 9*m || (s == 0 && m > 1)){
        cout<< "-1 -1" <<endl;
        return 0;
    }

    for(int i=0; i<m; i++){
        n.push_back('0');
    }


    for(int i= 0; s > 0 && i<m; i++){
        for(int j=9; s > 0 && j>= 0; j--){
            if(s >= j){
                n[i]+= j;
                s-= j;
                break;
            }
        }
    }

    string rn= string(n.rbegin(), n.rend());
    int z= 0;

    for(int i= 0; i<m; i++){
        if(rn[i] == '0') z++;
//        else break;
    }

    char mn;
    for(int i= 0; i<m; i++){
        if(rn[i] != '0'){
            mn= rn[i];
            break;
        }
    }

    if(rn[0] == '0')
    for(int i= 0; i< m; i++){
        if(rn[i] > '0'){
            rn[0]= '1';
            rn[i]--;
            break;
        }
    }

    cout<< rn<< " "<< n <<endl;
//    main();
    return 0;
}