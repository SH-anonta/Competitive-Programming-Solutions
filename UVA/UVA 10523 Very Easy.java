//package jd1;

import java.util.Scanner;
import java.math.BigInteger;

//public class JD1
class Main
{
    public static void main(String args[]){
            Main myWork = new Main();
            
            Scanner sc= new Scanner(System.in);

            while(sc.hasNext()){
            int n = sc.nextInt();
            int a = sc.nextInt();

            BigInteger sum = new BigInteger("0");
            String aStr = Integer.toString(a);

            for(int i= 1; i<=n; i++)
            {
                BigInteger temp = new BigInteger(aStr);
                temp = temp.pow(i);
                temp = temp.multiply(BigInteger.valueOf(i));
                sum = sum.add(temp);
            }

            System.out.println(sum);
        }
    }
    
}

