/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ptit;
import java.math.BigInteger;
import java.util.Scanner;
        
/**
 *
 * @author PC
 */
public class HinhVuong {
     public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int a1=ip.nextInt();
        int a2=ip.nextInt();
        int b1=ip.nextInt();
        int b2=ip.nextInt();
        int c1=ip.nextInt();
        int c2=ip.nextInt();
        int d1=ip.nextInt();
        int d2=ip.nextInt();
        int x1=Math.max(a1, Math.max(b1,Math.max(c1,d1)));
        int x2=Math.min(a1, Math.min(b1,Math.min(c1,d1)));
        int x3=Math.max(a2, Math.max(b2,Math.max(c2,d2)));
        int x4=Math.min(a2, Math.min(b2,Math.min(c2,d2)));
        int x=Math.max(Math.abs(x1-x2),Math.abs(x3-x4));
        System.out.print(x*x);
    }
}
