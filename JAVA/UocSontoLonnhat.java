/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ptit;
import java.util.Scanner;
import java.lang.Math;
/**
 *
 * @author PC
 */
public class UocSontoLonnhat {
    public static void sont(long n) {
        long c=0;
        while(n%2==0) {
            c=2;n/=2;
        }
        while(n%3==0) {
            c=3;n/=3;
        }
        long j=5;
        while(j*j<=n) {
            while(n%j==0) {
                c=j;
                n/=j;
            }
            while(n%(j+2)==0) {
                c=j+2;
                n/=j+2;
            }
            j+=6;
        }
        if(n!=1) {
            c=n;
        }
        System.out.println(c);
    }
    
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t=ip.nextInt();
        for(int i=1;i<=t;i++) {
            long n=ip.nextLong();
            sont(n);
        }
    }
}
