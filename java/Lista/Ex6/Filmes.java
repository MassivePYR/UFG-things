package Lista.Ex6;

class Filme extends Item {
    private String diretor;

    public Filme(String titulo, int ano, int duracao, String[] comentarios, String diretor) {
        super(titulo, ano, duracao, comentarios);
        this.diretor = diretor;
    }

    public void mostrarDados() {
        super.mostrarDados();
        System.out.println("Diretor: " + diretor);
    }
}
