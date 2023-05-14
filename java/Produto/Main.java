import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Produto batalhaNaval = new Produto("Jogo Batalha Naval", 10, "jogo", 100.00);
        Produto master = new Produto("Jogo Master", 20, "jogo", 150.00);
        Produto quebraCabeca = new Produto("Jogo Quebra-Cabeça", 30, "jogo", 50.00);

        Produto perfil = new Produto();
        Produto xadrez = new Produto("Jogo Xadrez");
        Produto damas = new Produto("Jogo Damas", 10);
        Produto baralho = new Produto("Jogo Baralho", 12, "jogo", 20.00);

        batalhaNaval.vender(3);
        master.vender(21);
        quebraCabeca.comprar(2);
        quebraCabeca.comprar(2, 120.00);
        batalhaNaval.consultar();
        master.consultar();
        master.inserir("Jogo Batalha Naval", 10, "jogo", 100.00);
        System.out.println(master.igual(batalhaNaval));
        perfil.consultar();
        perfil.inserir("Jogo Perfil", 10, "jogo", 100.00);
        quebraCabeca.consultar();
        perfil.consultar();
        xadrez.consultar();
        damas.consultar();
        baralho.consultar();
        new Produto("Jogo Banco Imobiliario", 10, "jogo", 100.00).consultar();

        sc.close();
    }
}