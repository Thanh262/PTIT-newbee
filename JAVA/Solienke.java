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
public class Solienke {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t=ip.nextInt();
        while(t-->0){
            String s=ip.next();
            int c=1;
            for(int i=0;i<s.length()-1;i++) {
                if(Math.abs(s.charAt(i)-s.charAt(i+1))!=1) {
                    c=0;
                    break;
                }
            }
            if(c==1){
                System.out.println("YES");
            } else {
                System.out.println("NO");

            }
        }
        
        
    }
}
