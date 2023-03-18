/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package ktfibo;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
/**
 *
 * @author PC
 */
public class KtFibo {

   public static void main(String[] args) {
        long loop[]=new long[105];
        Scanner ip = new Scanner(System.in);
        int t=ip.nextInt();
        for(int i=0;i<t;i++){
            loop[i]=ip.nextLong();
        }
        long max=Arrays.stream(loop).max().getAsLong();
        Set set = new HashSet();
        set.add(0);
        set.add(1);
        long c=0,a=0,b=1;
        do{
            c=a+b;
            set.add(c);
            a=b;b=c;
        } while(c<=max);
        for(int i=0;i<t;i++){
            if(loop[i]==0){
                System.out.println("YES");
                continue;
            }
            if(set.contains(loop[i])){
                System.out.println("YES");
            } else System.out.println("NO");
        }
    }
    
}
