/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package catdoi;
import java.util.Scanner;
/**
 *
 * @author PC
 */
public class CatDoi {
static char doi(char a){
        if(a=='0') return '0';
        if(a=='1') return '1';
        if(a=='8') return '0';
        if(a=='9') return '0';
        return '2';
    }
    public static void main(String[] args) {
        Scanner nhap = new Scanner(System.in);
        int t = nhap.nextInt();
        String p = nhap.nextLine();
        while(t>0){
            t--;
            String s = nhap.nextLine();
            int ok1 = 1; int ok2 = 0;
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)!='0' && s.charAt(i)!='1' && s.charAt(i)!='8' && s.charAt(i)!='9'){
                    ok1=0;
                    break;
                }
                if(doi(s.charAt(i))!='0'){
                    ok2=1;
                }
                if(ok2==1){
                    System.out.print(doi(s.charAt(i)));
                }
            }
            if(ok1==0 || ok2==0) System.out.print("INVALID");
            System.out.println("");
        }
        nhap.close();
    }
    
}
