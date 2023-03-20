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
public class Chuso4va7 {
     public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        String s=ip.nextLine();
        int c=0;
        for(int i=0;i<s.length();i++) {
            if(s.charAt(i)=='4'||s.charAt(i)=='7') {
                c++;
            }
        }
        if(c==4||c==7) System.out.println("YES"); else System.out.println("NO");
    }
}
