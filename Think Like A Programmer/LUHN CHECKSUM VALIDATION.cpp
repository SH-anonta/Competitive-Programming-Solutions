/*
 The Luhn formula is a widely used system for validating identification numbers. Using
the original number, double the value of every other digit. Then add the values of the
individual digits together (if a doubled value now has two digits, add the digits individually).
The identification number is valid if the sum is divisible by 10.

 * Write a program that takes an identification number of arbitrary length and
determines whether the number is valid under the Luhn formula. The program must
process each character before reading the next one.
 */


#include <iostream>

using namespace std;

int dubl(char n)
{
    n *= 2;
    if(n>9)
    {      
        n %= 10;
        n++;
    }

    return int(n);
}

bool scanid()
{
    int pos= 1;
    char idd;
    int chsum_even= 0;
    int chsum_odd = 0;
    
    while(cin.get(idd) && idd != '\n')
    {
        idd -= '0';     //turn ASCII digit into int
        
        //checksum for odd and even length IDs
        if(pos%2 == 0)
        {
            chsum_even += idd;
            chsum_odd += dubl(idd);
        }
        else
        {            
            chsum_even += dubl(idd);
            chsum_odd += idd;
        }
        pos++;
    }
    
    
    pos--; //exclude last end of line count
    if((pos %2 == 0)? chsum_even : chsum_odd %10 == 0)
        return true;
    else
        return false;
}

int main(void)
{
    int n= 9;
    char cc= '7';
    
    if(scanid())
        cout<< "Valid"<<endl;
    else
        cout<< "Intruder Alert!!!"<<endl;
        
    return 0;
}

//        if(pos%2 == 0)
//            chsum_even += idd;
//        else
//            chsum_even += dubl(idd);
//        
//        //checksum for odd length ID
//       if(pos%2 != 0)
//            chsum_odd += idd;
//        else
//            chsum_odd += dubl(idd);