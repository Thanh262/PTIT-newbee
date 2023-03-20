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
public class SoTamPhan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.skip("\n");
        while (t-- > 0) {
            String s=sc.nextLine();
            if(s.contains("4") || s.contains("5") || s.contains("6") || s.contains("7") || s.contains("8") || s.contains("9")){
                System.out.println("NO");
            } else System.out.println("YES");
        }
    }
}
