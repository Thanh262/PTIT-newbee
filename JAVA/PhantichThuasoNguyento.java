/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package phantichthuasonguyento;
import java.util.Scanner;
/**
 *
 * @author PC
 */
public class PhantichThuasoNguyento {
public static void sont(int n, int i) {
        System.out.print("Test ");
        System.out.print(i);
        System.out.print(":");
        int c=0;
        while(n%2==0){
            c+=1;
            n/=2;
        }
        if(c!=0){
            System.out.print(" 2(");
            System.out.print(c);
            System.out.print(")");
            if(n==1)System.out.println("");
        }
        c=0;
        while(n%3==0){
            c+=1;
            n/=3;
        }
        if(c!=0){
            System.out.print(" 3(");
            System.out.print(c);
            System.out.print(")");
            if(n==1)System.out.println("");
        }
        int j=5;
        while(j*j<=n){
            c=0;
            while(n%j==0){
                c+=1;
                n/=j;
            }
            if(c!=0){
                System.out.print(" ");
                System.out.print(j);
                System.out.print("(");
                System.out.print(c);
                System.out.print(")");
                if(n==1)System.out.println("");
            }
            c=0;
            while(n%(j+2)==0){
                c+=1;
                n/=j+2;
            }
            if(c!=0){
                System.out.print(" ");
                System.out.print(j+2);
                System.out.print("(");
                System.out.print(c);
                System.out.print(")");
                if(n==1)System.out.println("");
            }
            j+=6;
        }
        if(n!=1){
            System.out.print(" ");
            System.out.print(n);
            System.out.println("(1)");
        }
    }
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t=ip.nextInt();
        for(int i=1;i<=t;i++) {
            int n=ip.nextInt();
            sont(n,i);
        }
    }
    
}
