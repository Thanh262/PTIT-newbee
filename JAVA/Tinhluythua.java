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
public class Tinhluythua {
    static long mod=1000000007;
            
    static long mod(long a,long b) {
        if(b==0) return 1;
        long x=mod(a,b/2);
        if(b%2==0) return x*x%mod;
        return (a*x)%mod*x%mod;
    }
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int ok=1;
        while(ok==1) {
            long a=ip.nextLong();
            long b=ip.nextLong();
            if(a==0 && b==0) {
                ok=0;
                break;
            }
            System.out.println(mod(a,b));
        }
    }
}
