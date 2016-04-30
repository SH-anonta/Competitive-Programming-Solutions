#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int sz= 1e5;


    int n, q, k, a, b;
    
    cin>>n>>q;
    int** seqSet = new int*[(const int)n];

    for(int i= 0; i<n; i++){
        cin>>k;
        int* seq = new int[(const int)k];
        
        for(int j= 0; j<k; j++){
            cin>>seq[j];
        }
        
        seqSet[i]= seq;
        
        //delete[] b;
    }

    for(int i= 0; i<q; i++){
        cin>>a>>b;
        cout<<seqSet[a][b]<<endl;
    }

    delete[] seqSet;
	return 0;
}
