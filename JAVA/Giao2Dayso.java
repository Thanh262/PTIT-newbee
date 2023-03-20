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
public class Giao2Dayso {
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int a[]=new int[1000];
        int b[]=new int[1000];
        for(int i=0;i<n;i++){
            a[sc.nextInt()]=1;
        }
        for(int i=0;i<m;i++){
            b[sc.nextInt()]=1;
        }
        for(int i=0;i<1000;i++){
            if(a[i]==1&&b[i]==1){
                System.out.print(i);
                System.out.print(" ");
            }
        }
    }
}
