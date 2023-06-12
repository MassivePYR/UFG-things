package Prova.Q2;

public class Principal {
    public static void main(String[] args) {
        Celular cel1 = new Celular("Apple", "Iphone 4s");
        cel1.atualizaCor("Branco");
        System.out.println ("Celular 1: " + cel1.getMarca() + " " + cel1.getModelo());
        Celular cel2 = new Celular("Nokia");
        cel2.atualizaCor("Preto");
        cel2.atualizaModelo("XXX");
        System.out.println ("Celular 2: " + cel2.getMarca() + " " + cel2.getModelo());
        
        }
}
