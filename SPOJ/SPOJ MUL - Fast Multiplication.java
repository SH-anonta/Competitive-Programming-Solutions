//package javaapplication1;

import java.util.Scanner;
import java.math.BigInteger;


class Main {

    public static void main(String[] args) {
        Main solve= new Main();
        Scanner sc = new Scanner(System.in);
        
        int n= sc.nextInt();
        BigInteger a, b;       
        
        while(n-- > 0){
            a = sc.nextBigInteger();
            b = sc.nextBigInteger();
            
            System.out.println(a.multiply(b));
        }
        
    }
}
