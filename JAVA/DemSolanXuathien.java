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
public class DemSolanXuathien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int k = 1; k <= t; k++) {
            System.out.printf("Test %d:\n", k);
            int n = sc.nextInt();
            int a[] = new int[n];
            int f[] = new int[100001];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                f[a[i]] += 1;
            }
            for (int i = 0; i < n; i++) {
                if (f[a[i]] > 0) {
                    System.out.printf("%d xuat hien %d lan\n", a[i], f[a[i]]);
                    f[a[i]] = 0;
                }
            }
        }
    }
}
