import java.text.NumberFormat;

public class Produto {
    public static int cont = 1;
    private int codigo;
    private String nome;
    private int estoque;
    private String tipo;
    private double valor;

    public Produto() {
        this.codigo = cont;
        cont++;
    }

    public Produto(String nome) {
        this.codigo = cont;
        this.nome = nome;
        cont++;
    }

    public Produto(String nome, int estoque) {
        this.codigo = cont;
        this.nome = nome;
        this.estoque = estoque;
        cont++;
    }

    public Produto(String nome, int estoque, String tipo, double valor) {
        this.codigo = cont;
        this.nome = nome;
        this.estoque = estoque;
        this.tipo = tipo;
        this.valor = valor;
        cont++;
    }

    private static String formatarBrasil(double valor) {
        NumberFormat formatoBrasil = NumberFormat.getCurrencyInstance();
        return formatoBrasil.format(valor);
    }

    public void vender(int quantidade) {
        if (estoque < quantidade) {
            System.out.println("Estoque do produto " + nome + " insuficiente, quantidade em estoque: " + estoque);
        } else {
            double valorTotal = valor * quantidade;
            estoque -= quantidade;
            System.out.println("Venda feita com sucesso! Valor da venda : " + formatarBrasil(valorTotal));
        }
    }

    public void comprar(int quantidade) {
        estoque += quantidade;
        System.out.println("Compra realizada com sucesso! Novo estoque: " + estoque);
    }

    public void comprar(int quantidade, double novoValor) {
        estoque += quantidade;
        valor = novoValor;
        System.out.println("Compra realizada com sucesso! Novo estoque: " + estoque
                + ". Valor do produto alterado para: " + formatarBrasil(novoValor));
    }

    public void consultar() {
        System.out.println(
                "codigo: " + codigo
                        + " | nome: " + nome
                        + " | estoque: " + estoque
                        + " | tipo: " + tipo
                        + " | valor: " + formatarBrasil(valor));
    }

    public void inserir(String nome, int estoque, String tipo, double valor) {
        this.nome = nome;
        this.estoque = estoque;
        this.tipo = tipo;
        this.valor = valor;
    }

    public boolean igual(Produto produto) {
        return nome == produto.nome && tipo == produto.tipo;
    }
}
