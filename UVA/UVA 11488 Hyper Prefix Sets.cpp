
//#Name: Sofen Hoque Anonta  #Problm:
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

class Node{
public:
    int word;
    int pre;

    Node* ed[2];
};

Node* root;

void add(string& s, int d, Node* cn){
    if(s[d] == '\0'){
        cn->pre++;
        cn->word++;
        return;
    }

    cn->pre++;

    char ch= s[d]-'0';

    if(cn->ed[ch] == NULL){
        cn->ed[ch]= new Node();
    }

    add(s, d+1, cn->ed[ch]);
}

void printTrie(string&s, int d, Node* cn){
    if(cn->word > 0){
        cout<< ">> "<< s <<endl;
    }

    for(int i= 0; i<2; i++){
        if(cn->ed[i] == NULL) continue;

        s.push_back(i+'0');
        printTrie(s, d+1, cn->ed[i]);
        s.pop_back();
    }
}


int mxcommpefix;
void maxCommonPrefix(int total, int d, Node* cn){
    int ca= cn->pre*d;
    if(ca > mxcommpefix) mxcommpefix= ca;
    
    if(cn->ed[0] != NULL) maxCommonPrefix(total, d+1, cn->ed[0]);
    if(cn->ed[1] != NULL) maxCommonPrefix(total, d+1, cn->ed[1]);
}


void solve(){
    int t, n;

    cin>>t;

    int tot;
    while(t--){
        cin>>n;
        tot= n;
        string temp;
        
        root = new Node();
        mxcommpefix= 0;
        while(n--){
            cin>>temp;
            add(temp, 0, root);
        }
        
        maxCommonPrefix(n, 0, root);
//        cout<< ">> "<<mxcommpefix <<endl;
        cout<<mxcommpefix <<endl;
    }
}

int main(void)
{
//    freopen("D:/input.txt", "r", stdin);
    solve();


    return 0;
}
