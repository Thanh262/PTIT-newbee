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
public class Tonguocsotru1 {
    static long[] f =new long[2000001];
    public static void main(String[] args) {
        for(int i=0;i<2000001;i++) {
            boolean ok=true;
            for(int j=2;j<=(long)Math.sqrt(i);j++) {
                if(i%j==0) {
                    f[i]=f[j]+f[i/j];
                    ok=false;
                    break;
                }
            }
            if(ok==true) f[i]=i;
        }
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        long sum=0;
        for(int i=0;i<n;i++) {
            int t=sc.nextInt();
            sum+=f[t];
        }
        System.out.println(sum);
    }
}
