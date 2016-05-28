//package jd1;

import java.util.Scanner;
import java.math.*;

class JD1
{
    public static void main(String args[]){
        JD1 Main = new JD1();
        
        Scanner sc = new Scanner(System.in);
        int t;
        BigInteger num = BigInteger.ONE;
        BigInteger n;
        
        t = sc.nextInt();
        
        while(t>0)
        {
            num = BigInteger.ONE;
            
            n = sc.nextBigInteger();
            while(!(n.equals(BigInteger.ONE))){
                num = num.multiply(n);
                n = n.subtract(BigInteger.ONE);
            }
            
            System.out.println(num);
            t--;
        }
        
    }
}