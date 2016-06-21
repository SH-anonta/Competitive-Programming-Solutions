#include <iostream>
#include <stack>
#include <cstdlib>
#include <string>

//provides precedence of operators
int prec(char opr){
    if(opr == '+' || opr == '-') return 1;
    else if(opr == '*' || opr == '/') return 2;
    else if(opr == '^') return 3;
    else return -1; //invalid operator
}

std::string infixToPostfix(const std::string& exp){
    std::string postfix;
    std::stack<char> stk;
    
    for(int i=0; exp[i]; i++){
        //an operand is encountered
        if(exp[i]>= 'a' && exp[i]<= 'z' || exp[i]>= 'A' && exp[i]<= 'Z' ){
            postfix.push_back(exp[i]);
        }
        else if(exp[i] == '('){
            stk.push('(');
        }
        else if(exp[i] == ')'){
            //pop out and add to postfix everything until the closing parenthesis is found
            while(!stk.empty() && stk.top() != '('){
                postfix.push_back(stk.top());
                stk.pop();
            }
            if(!stk.empty()) stk.pop(); //pop the closing parenthesis
            else{
                //since the closing parenthesis was not found
                std::cerr<<"Invalid infix expression: "<<exp<<std::endl;
                exit(1);
            }
        }
        //an operator is encountered
        else{
            //pop and add to postfix everything until an operator
            //with greater precedence than current exp[i] is encountered
            while(!exp.empty() && prec(exp[i]) <= prec(stk.top())){
                postfix.push_back(stk.top());
                stk.pop();
            }
            stk.push(exp[i]);
        }
    }
    
    //add everything left in stack to the postfix exp
    while(!stk.empty()){
        postfix.push_back(stk.top());
        stk.pop();
    }
    
    return postfix;
}

int main(void)
{
    using namespace std;
    int i;
    string s;
    cin>>i;
    
    while(i--){
        cin>>s;
        cout<< infixToPostfix(s) <<endl;
    }
    
    return 0;
}