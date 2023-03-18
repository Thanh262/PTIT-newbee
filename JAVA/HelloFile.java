/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package dmt.readdatafromfile;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
/**
 *
 * @author 
 */
public class ReadDataFromFile {

    public static void main(String[] args) throws FileNotFoundException {
        File file=new File("Hello.txt");
        Scanner scanner=new Scanner(file);
            while(scanner.hasNextLine()){
                String line=scanner.nextLine();
                System.out.println(line);
            }
    }
}

