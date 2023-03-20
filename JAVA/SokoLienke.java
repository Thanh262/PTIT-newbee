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
public class SokoLienke {
    public static boolean tong(long n){
        long sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum%10==0;
    }
    
    public static boolean cach(long n){
        while(n>9){
            if(Math.abs(n%10-n/10%10)!=2)return false;
            n/=10;
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t=ip.nextInt();
        for(int i=1;i<=t;i++){
            long n=ip.nextLong();
            if(tong(n)&&cach(n)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
