//Problem: Top coder Substitute https://arena.topcoder.com/index.html#/u/practiceCode/1282/1262/1333/2/1282

#include <iostream>
#include <string>

using namespace std;

class Substitute{
public:
    int getNum(string s){
        int num= 0;
        int len = s.size();
        for(int i= 0; i<len; i++){
            if(s[i] >= '0' && s[i]<= '9'){
                num += s[i] -'0';
                num *= 10;
            }
        }

        return num/10;
    }
    
    int getValue(string key, string code){
        int klen = key.size();
        int clen = code.size();
        
        for(int i= 0; i<klen-1; i++){
            for(int j= 0; j<clen; j++){
                if(code[j] == key[i]) code[j] = '0'+i+1;
            }
        }
        
        for(int i= 0; i<clen; i++){
            if(code[i] == key[klen-1]) code[i] = '0';
        }
        
        return getNum(code);
    }
};