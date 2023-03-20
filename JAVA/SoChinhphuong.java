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
public class SoChinhphuong {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++){
            int n=sc.nextInt();   
            int x=(int)Math.sqrt(n);
            if(x*x==n){
                System.out.println("YES");
            } else System.out.println("NO");
        }
    }
}
