import java.text.NumberFormat;

public class Produto {
    int codigo;
    String nome;
    int estoque;
    String tipo;
    double valor;

    public Produto(int codigo) {
        this.codigo = codigo;
    }

    public Produto(int codigo, String nome) {
        this.codigo = codigo;
        this.nome = nome;
    }

    public Produto(int codigo, String nome, int estoque) {
        this.codigo = codigo;
        this.nome = nome;
        this.estoque = estoque;
    }

    public Produto(int codigo, String nome, int estoque, String tipo, double valor) {
        this.codigo = codigo;
        this.nome = nome;
        this.estoque = estoque;
        this.tipo = tipo;
        this.valor = valor;
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
