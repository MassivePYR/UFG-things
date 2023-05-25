package Lista.Ex6;

class Jogo extends Item {
    private int numeroJogadores;
    private String plataforma;

    public Jogo(String titulo, int ano, int duracao, String[] comentarios, int numeroJogadores, String plataforma) {
        super(titulo, ano, duracao, comentarios);
        this.numeroJogadores = numeroJogadores;
        this.plataforma = plataforma;
    }

    public void mostrarDados() {
        super.mostrarDados();
        System.out.println("Número de Jogadores: " + numeroJogadores);
    }

    public String getPlataforma() {
        return plataforma;
    }
}
// exemplos de plataforma: PC, PS5, XBOX Series X, Steam.