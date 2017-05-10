//#Name: Sofen Hoque Anonta  #Problm:
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

class Node{
public:
    int word;
    int pre;
    
    Node* ed[26];
};

Node root;

void add(string& s, int d, Node* cn){
    if(s[d] == '\0'){
        cn->pre++;
        cn->word++;
        return;
    }
    
    cn->pre++;
    
    char ch= s[d]-'a';
    
    if(cn->ed[ch] == NULL){
        cn->ed[ch]= new Node();
    }
    
    add(s, d+1, cn->ed[ch]);
}
//
//void printTrie(string&s, int d, Node* cn){
//    if(cn->word > 0){
//        cout<< ">> "<< s <<endl;
//    }
//    
//    for(int i= 0; i<26; i++){
//        if(cn->ed[i] == NULL) continue;
//        
//        s.push_back(i+'a');
//        printTrie(s, d+1, cn->ed[i]);
//        s.pop_back();
//    }
//}

int abb;    //ubto which position should be used as abbrivation / unique prefix
//abb must be set to empty string initially
void findAbb(string& s, int d, Node* cn){
    if(cn->pre == 1 || s[d] == '\0'){
        abb= d;
        return;
    }
    
    findAbb(s, d+1, cn->ed[s[d]-'a']);
}

vector<string> vs;
void solve(){
    string s;
    
    while(cin>>s){
        vs.push_back(s);
        add(s, 0, &root);
    }
    
    int len= vs.size();
    
    for(int i= 0; i<len; i++){
        s= vs[i];
        abb= 0;
        findAbb(s, 0, &root);
        cout<< s <<" ";
        for(int j= 0; j<abb; j++){
            cout<< s[j];
        }
        cout<<"\n";
    }
}

int main(void)
{
//    freopen("D:/input.txt", "r", stdin);
    solve();
//    string s= "text";
//    string t= "taxi";
//    string v= "latex";
//    
//    add(s, 0, &root);
//    add(t, 0, &root);
//    add(v, 0, &root);
//    
//    s="";
//    printTrie(s, 0, &root);
    
    return 0;
}