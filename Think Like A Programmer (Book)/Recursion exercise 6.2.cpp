//Consider an array representing a binary string, where every element’s data
//value is 0 or 1. Write a bool function to determine whether the binary string
//has odd parity (an odd number of 1 bits). Hint: Remember that the recursive
//function is going to return true (odd) or false (even), not the count of 1 bits.
//Solve the problem first using iteration, then recursion.


#include <iostream>

using namespace std;

bool oddParity(char* bstr){
    if(*bstr == '\0') return false;
    
    if(*bstr == '1') return !oddParity(bstr+1);
    else return oddParity(bstr+1);
    
}

int main(void)
{
    char bitstring[100]= "10011011";
    
    cout<< oddParity(bitstring) <<endl;
    
    
    return 0;
}