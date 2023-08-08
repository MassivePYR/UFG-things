package Media;

import java.util.Scanner;

public class Media {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double n1, n2;
        double media;
        System.out.println("Digite a primeira nota: ");
        n1 = scan.nextDouble();
        System.out.println("Digite a segunda nota: ");
        n2 = scan.nextDouble();
        media = (n1 + n2) / 2;
        System.out.println("A média é: " + media);
        if (media >= 9) {
            System.out.println("Aprovado");
        } else {
            System.out.println("Reprovado");
        }
        scan.close();

    }
}
