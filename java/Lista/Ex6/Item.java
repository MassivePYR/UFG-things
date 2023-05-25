package Lista.Ex6;

import java.util.Arrays;

class Item {
    private String titulo;
    private int ano;
    private int duracao;
    private String[] comentarios;

    public Item(String titulo, int ano, int duracao, String[] comentarios) {
        this.titulo = titulo;
        this.ano = ano;
        this.duracao = duracao;
        this.comentarios = comentarios;
    }

    public void mostrarDados() {
        System.out.println("Título: " + titulo);
        System.out.println("Ano: " + ano);
        System.out.println("Duração: " + duracao);
        System.out.println("Comentários: " + Arrays.toString(comentarios));
    }

    public void addComentario(String comentario) {
        comentarios = Arrays.copyOf(comentarios, comentarios.length + 1);
        comentarios[comentarios.length - 1] = comentario;
    }

    public Object getTitulo() {
        return null;
    }
}