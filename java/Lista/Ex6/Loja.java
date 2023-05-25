package Lista.Ex6;

import java.util.ArrayList;

public class Loja {
    public static void main(String[] args) {
        ArrayList<Item> itens = new ArrayList<Item>();

        // Criar 10 CDs
        for (int i = 0; i < 10; i++) {
            String[] comentarios = { "Comentário 1", "Comentário 2", "Comentário 3" };
            CD cd = new CD("CD " + (i + 1), 2023, 60, comentarios, "Artista " + (i + 1), 12);
            itens.add(cd);
        }

        // Criar 10 Filmes
        for (int i = 0; i < 10; i++) {
            String[] comentarios = { "Comentário 1", "Comentário 2" };
            Filme filme = new Filme("Filme " + (i + 1), 2023, 120, comentarios, "Diretor " + (i + 1));
            itens.add(filme);
        }

        // Criar 10 Jogos
        for (int i = 0; i < 10; i++) {
            String[] comentarios = { "Comentário 1" };
            Jogo jogo = new Jogo("Jogo " + (i + 1), 2023, 180, comentarios, 2, "Plataforma " + (i + 1));
            itens.add(jogo);
        }

        // Percorrer o vetor mostrando os dados dos itens
        for (Item item : itens) {
            item.mostrarDados();
            if (item instanceof Jogo) {
                Jogo jogo = (Jogo) item;
                System.out.println("Plataforma: " + jogo.getPlataforma());
            }
            System.out.println();
        }
    }
}