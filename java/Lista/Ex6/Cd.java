package Lista.Ex6;

class CD extends Item {
    private String artista;
    private int quantidadeFaixas;

    public CD(String titulo, int ano, int duracao, String[] comentarios, String artista, int quantidadeFaixas) {
        super(titulo, ano, duracao, comentarios);
        this.artista = artista;
        this.quantidadeFaixas = quantidadeFaixas;
    }

    public void mostrarDados() {
        super.mostrarDados();
        System.out.println("Artista: " + artista);
        System.out.println("Quantidade de Faixas: " + quantidadeFaixas);
    }
}