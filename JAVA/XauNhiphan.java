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
public class XauNhiphan {
     public static void main(String[] args) {
        long[] F=new long[93];
        F[0]=0;F[1]=1;
        for(int i=2;i<93;i++) F[i]=F[i-2]+F[i-1];
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long k=sc.nextLong();
            while(n!=1&&n!=2) {
                if(F[n-2]>=k) {
                    n-=2;
                } else {
                    k-=F[n-2];
                    n-=1;
                }
            }
            System.out.println(n==1?"0":"1");
        }
    }
}
