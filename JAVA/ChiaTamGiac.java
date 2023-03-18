/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package chiatamgiac;
import java.util.Scanner;
/**
 *
 * @author PC
 */
public class ChiaTamGiac {

  public static void main(String[] args) {
        Scanner nhap=new Scanner(System.in);
        int t=nhap.nextInt();
        while(t>0){
            t--;
            double n=nhap.nextDouble(); double h=nhap.nextDouble();
            for(double i=1;i<n;i++){
                double tam = i/n;
                double kq = h*(Math.sqrt(tam));
                System.out.printf("%.6f ", kq);
            }
            System.out.println("");
        }
        nhap.close();
    }
    
}
