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
public class SapxepDoichoTructiep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int dem=0;
        for(int i=0;i<n;i++){
            boolean c=false;
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                    c=true;
                }
            }
            if(c){
                dem+=1;
                System.out.printf("Buoc %d:",dem);
                for(int j=0;j<n;j++){
                    System.out.printf(" %d",a[j]);
                }
                System.out.println();
            }
        }
    }
}
