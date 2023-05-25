package Lista.Ex3;

public class Controle {
    private Tv tv;

    public Controle(Tv tv) {
        this.tv = tv;
    }

    public String toString() {
        return this.tv.toString();
    }

    public static void main(String[] args) {
        Tv tv = new Tv();
        Controle controle = new Controle(tv);
        int opcao = 0;
        System.out.println("Ligando a TV...\n");
        while (opcao != 6) {
            System.out.print("\033[H\033[2J");
            System.out.flush();
            System.out.println(controle.toString());
            System.out.println("Selecione uma opção:\n");
            System.out.println("1 - Aumentar volume");
            System.out.println("2 - Diminuir volume");
            System.out.println("3 - Aumentar canal");
            System.out.println("4 - Diminuir canal");
            System.out.println("5 - Trocar canal");
            System.out.println("6 - Sair");
            System.out.print("Opção: ");
            opcao = Integer.parseInt(System.console().readLine());
            switch (opcao) {
                case 1:
                    controle.tv.aumentarVolume();
                    break;
                case 2:
                    controle.tv.diminuirVolume();
                    break;
                case 3:
                    controle.tv.aumentarCanal();
                    break;
                case 4:
                    controle.tv.diminuirCanal();
                    break;
                case 5:
                    int canal = 0;
                    System.out.print("Digite o numero canal:");
                    canal = Integer.parseInt(System.console().readLine());
                    controle.tv.trocarCanal(canal);
                    break;
                case 6:
                    System.out.println("Desligando a TV...");
                    break;
                default:
                    System.out.println("Opção inválida!");
                    break;
            }
        }
    }
}
