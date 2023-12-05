/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lab8;

/**
 *
 * @author ustsu
 */
public class Lab8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Arac arac= new Arac("binek",2004);
        arac.ekranaYazdir();
       Bmw bmw = new Bmw("motorlu", 2023, "BMW", 1500, 4, "M3", "Mavi", 500000);
        bmw.ekranaYazdir();
    }
    
}
