
public class Main {
    public static void main(String[] args) {

        Produto batalhaNaval = new Produto(001, "Jogo Batalha Naval", 10, "jogo", 100.00);
        Produto master = new Produto(002, "Jogo Master", 20, "jogo", 150.00);
        Produto quebraCabeca = new Produto(003, "Jogo Quebra-Cabeça", 30, "jogo", 50.00);

        Produto perfil = new Produto(004);
        Produto xadrez = new Produto(005, "Jogo Xadrez");
        Produto damas = new Produto(005, "Jogo Damas", 10);
        Produto baralho = new Produto(006, "Jogo Baralho", 12, "jogo", 20.00);

        batalhaNaval.vender(3);
        master.vender(21);
        quebraCabeca.comprar(2);
        quebraCabeca.comprar(2, 120.00);
        master.consultar();
        master.inserir("Jogo Batalha Naval", 10, "jogo", 100.00);
        System.out.println(master.igual(batalhaNaval));
        perfil.consultar();
        perfil.inserir("Jogo Perfil", 10, "jogo", 100.00);
        perfil.consultar();
        xadrez.consultar();
        damas.consultar();
        baralho.consultar();
        new Produto(007, "Jogo Banco Imobiliario", 10, "jogo", 100.00).consultar();
    }
}