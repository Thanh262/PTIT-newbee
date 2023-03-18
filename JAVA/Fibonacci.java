/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package fibonacci;
import java.util.Scanner;
import java.lang.Math;

/**
 *
 * @author PC
 */
public class Fibonacci {

   public static void main(String[] args) {
        Scanner ip=new Scanner(System.in);
        int t=ip.nextInt();
        long F[]=new long[100];
        F[0]=0;F[1]=1;F[2]=2;
        for(int i=3;i<93;i++) F[i]=F[i-1]+F[i-2];
        while(t-->0) 
        {
            int n=ip.nextInt();
            System.out.println(F[n-1]);
        }
    }
    
}
