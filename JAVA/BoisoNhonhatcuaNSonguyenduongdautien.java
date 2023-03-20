/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ptit;
import java.util.Scanner;
/**
 *
 * @author PC
 */
public class BoisoNhonhatcuaNSonguyenduongdautien {
     public static long gcd(long a, long b) {
        if (b==0) return a;
        return gcd(b,a%b);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            long n=sc.nextLong();
            long out=1;
            for(long i=1;i<=n;i++){
                long x=gcd(out,i);
                out=out*i/x;
            }
            System.out.println(out);
        }
    }
}
