//#Name: Sofen Hoque Anonta  #Problm:
//prefix Trie for lower case engilsh letters 
#include <iostream>

using namespace std;


class Trie{
private:
    //max number of child each node of trie can have
    static const int CHILD_COUNT= 10;
    class TrieNode{
    public:
        int words;
        int prefixes;
        TrieNode* edge[CHILD_COUNT];
        
        TrieNode(){
            words= 0;
            prefixes= 0;
            for(int i= 0; i<CHILD_COUNT; i++){edge[i]= NULL;}
        }
    };
    
    TrieNode root;
    
    //visit each node and delete them
    //cn for current current
    void clearAllNodes(TrieNode* cn){
        for(int i= 0; i<CHILD_COUNT; i++){
            if(cn->edge[i] == NULL) continue;
            clearAllNodes(cn->edge[i]);
            cn->edge[i]= NULL;
        }
        
        delete cn;
    }
    
public:
    Trie(){
        
    }
    
    //function to insert a string into the Trie
    void add(string& s, int depth, TrieNode *cn){
        if(s[depth] == '\0'){
            cn->prefixes++;
            cn->words++;
            return;
        }
        
        char ch= s[depth]-'0';
        if(cn->edge[ch] == NULL){
            cn->edge[ch] = new TrieNode();
        }
        
        cn->prefixes++;
        add(s, depth+1, cn->edge[ch]);
    }
    
    //wrapper function to insert a string into the Trie
    void add(string& s){
        add(s, 0, &root);
    }
    
    int frequency(string& s){
        
    }
    
    int prefixFrequency(){
        
    }
    
    //cn is current node
    void printDictionary(TrieNode* cn, string& s){
        //todo print frequency of a word
        if(cn->words > 0){
            cout<< ">> "<< s <<endl;
        }
        
        for(int i= 0; i<CHILD_COUNT; i++){
            if(cn->edge[i] == NULL) continue;
            
            s.push_back(i+'0');
            printDictionary(cn->edge[i], s);
            s.pop_back();
        }
    }
    
    //print all strings inserted in the Trie
    void printDictionary(){
        string temp;
        printDictionary(&root, temp);
    }
    
    
    bool prefixOfOtherWord(TrieNode* cn){
        if(cn->words == 1 && cn->prefixes > 1) return true;

        for(int i= 0; i<CHILD_COUNT; i++){
            if(cn->edge[i] == NULL) continue;
            
            if(prefixOfOtherWord(cn->edge[i])) return true;
            
        }
        
        return false;
    }
    
    //return if there are words that are prefix of other words in the trie
    //wrapper function
    bool prefixOfOtherWord(){
        return prefixOfOtherWord(&root);
    }
    
    //destructor
    ~Trie(){
//        clearAllNodes(&root);
    }
    
    //delete all entry in trie
    void clear(){
        clearAllNodes(&root);
    }
};

void solve(){
    
    string s;
    int t, n;
    
    cin>>t;
    
    while(t--){
        Trie tr;
        cin>>n;
        
        while(n--){
            cin>>s;
            tr.add(s);
        }
        
        cout<< (tr.prefixOfOtherWord() ? "NO" : "YES") <<endl;
//        tr.clear();
    }
}

int main(void)
{
    solve();
    
    
    return 0;
}