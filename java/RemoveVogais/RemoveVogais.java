package RemoveVogais;

import java.util.Scanner;

public class RemoveVogais {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String frase = input.nextLine();
        String fraseSemVogais = frase.replaceAll("[aeiouAEIOU]", "");
        System.out.println(fraseSemVogais);
        input.close();
    }
}