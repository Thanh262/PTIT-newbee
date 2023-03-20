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
public class MangDoiXung {
     public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t=ip.nextInt();
        while(t-->0) {
            int n=ip.nextInt();
            long a[]=new long[n];
            for(int i=0;i<n;i++) 
            {
                a[i]=ip.nextLong();
            }
            boolean c=true;
            for(int i=0;i<n/2;i++) 
            {
                if(a[i]!=a[n-1-i]) {
                    c=false;
                    break;
                }
            }
            if(c) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
