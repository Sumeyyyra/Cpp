/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java_ws;//dosyanin srcden sonrakş pathiyle aynı uzantıda olmalı .larla ilerleniyor.

import java.util.*;

public class Java_ws {

    public static void main(String[] args) {
        //System.out.println("sumeyra");
        //sout  sonra taba bas üsttekini otomatik yazıyor.
        //psvm sonra taba basarsan maşn classını oluşturur.
        //sağ tık format yaparsan yazılışalrı düzeltiyor.
        Scanner scn = new Scanner(System.in);
        double n1, n2;
        System.out.println("Sayi 1:");
        //next yaparsan string alır. 
        n1 = scn.nextDouble();
        System.out.println("Sayi 2:");
        n2 = scn.nextDouble();

        double sum = n1 + n2;
        System.out.println("Toplam= " + sum);

    }

}
