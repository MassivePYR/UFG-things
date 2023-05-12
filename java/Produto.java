class Produto {
    private static int cont = 0;
    private int codigo;
    private String nome;
    private int quantidade;
    private String tipo;
    private double valor;

    public Produto(String nome, int quantidade, String tipo, double valor) {
        this.codigo = cont;
        this.nome = nome;
        this.quantidade = quantidade;
        this.tipo = tipo;
        this.valor = valor;
        cont++;
    }

    public Produto() {
        this.codigo = 1;
        this.nome = "Produto 1";
        this.quantidade = 10;
        this.tipo = "Tipo 1";
        this.valor = 10.0;
    }

    public void imprimir() {
        System.out.println("Código: " + this.codigo);
        System.out.println("Nome: " + this.nome);
        System.out.println("Quantidade: " + this.quantidade);
        System.out.println("Tipo: " + this.tipo);
        System.out.println("Valor: " + this.valor);
    }

    public static void main(String[] args) {
        Produto p1 = new Produto();
        p1.imprimir();
        Produto p2 = new Produto("Produto 2", 20, "Tipo 2", 20.0);
        p2.imprimir();
    }

}
