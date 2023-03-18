/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package boichunguocchung;
import java.math.BigInteger;
import java.util.Scanner;
/**
 *
 * @author PC
 */
public class BoiChungUocChung {

   public static long uocchung(long a, long b){
        while(b!=0){
            if(a>b){
                a=a-b;
            } else {
                b=b-a;
            }
        }
        return a;
    }
    
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t=ip.nextInt();
        while(t-->0){
            long a=ip.nextLong();
            long b=ip.nextLong();
            long c=uocchung(a, b);
            System.out.print(a*b/c);
            System.out.print(" ");
            System.out.println(c);
        }
    }
    
}
