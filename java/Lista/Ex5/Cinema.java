package Lista.Ex5;

import java.util.ArrayList;
import java.util.Scanner;

public class Cinema {
    public static void main(String[] args) {
        ArrayList<Filme> filmes = new ArrayList<Filme>();
        Scanner scanner = new Scanner(System.in);
        int opcao = 0;

        // Obs: tomei a liberdade de colocar alguns filmes para testar o programa já em
        // default

        Filme filme = new Filme("Vingadores: Ultimato");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2019);
        filme.setAutorPrincipal("Robert Downey Jr.");
        filme = new Filme("Vingadores: Guerra Infinita");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2018);
        filme.setAutorPrincipal("Robert Downey Jr.");
        filme = new Filme("Vingadores: Era de Ultron");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2015);
        filme.setAutorPrincipal("Robert Downey Jr.");
        filme = new Filme("Vingadores");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2012);
        filme.setAutorPrincipal("Robert Downey Jr.");
        filme = new Filme("Homem de Ferro 3");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2013);
        filme.setAutorPrincipal("Robert Downey Jr.");
        filme = new Filme("Homem de Ferro 2");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2010);
        filme.setAutorPrincipal("Robert Downey Jr.");
        filme = new Filme("Homem de Ferro");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2008);
        filme.setAutorPrincipal("Robert Downey Jr.");
        filme = new Filme("Homem-Formiga e a Vespa");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2018);
        filme.setAutorPrincipal("Paul Rudd");
        filme = new Filme("Homem-Formiga");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2015);
        filme.setAutorPrincipal("Paul Rudd");
        filme = new Filme("Capitã Marvel");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2019);
        filme.setAutorPrincipal("Brie Larson");
        filme = new Filme("Capitão América: Guerra Civil");
        filmes.add(filme);
        filme.setGenero("Ação");
        filme.setAno(2016);
        filme.setAutorPrincipal("Chris Evans");

        while (opcao != 5) {
            System.out.print("\033[H\033[2J");
            System.out.flush();
            System.out.println("Bem vindo ao Arquivo do Cinema\n" + "==============================\n"
                    + "Escolha uma opção abaixo" + "\n" + "==============================\n" + "1 - Cadastrar Filme\n"
                    + "2 - Listar Filmes\n" + "3 - Buscar Filme\n" + "4 - Remover Filme\n" + "5 - Sair\n"
                    + "==============================\n" + "Digite uma opção: ");

            opcao = scanner.nextInt();
            scanner.nextLine();
            switch (opcao) {
                case 1:
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    System.out.println("Digite o nome do filme");
                    String nome = scanner.nextLine();

                    // se for tirar os filmes default, tem que usar essa linha abaixo:
                    // Filme filme = new Filme(nome);
                    filme = new Filme(nome); // ao inves dessa linha

                    filmes.add(filme);
                    System.out.println("Digite o gênero do filme");
                    String genero = scanner.nextLine();
                    filme.setGenero(genero);
                    System.out.println("Digite o ano do filme");
                    int ano = scanner.nextInt();
                    filme.setAno(ano);
                    scanner.nextLine();
                    System.out.println("Digite o autor principal do filme");
                    String autorPrincipal = scanner.nextLine();
                    filme.setAutorPrincipal(autorPrincipal);
                    break;
                case 2:
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    for (Filme f : filmes) {
                        System.out.println(f.toString());
                    }
                    System.out.println("Pressione enter para continuar");
                    scanner.nextLine();
                    break;
                case 3:
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    System.out.println("Digite o nome do filme desejado");
                    String nomeBusca = scanner.nextLine();
                    for (Filme f : filmes) {
                        if (f.getNome().equals(nomeBusca)) {
                            System.out.println(f.getNome());
                        }
                    }
                    System.out.println("Pressione enter para continuar");
                    scanner.nextLine();
                    break;
                case 4:
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    System.out.println("Digite o nome do filme a ser removido");
                    String nomeRemover = scanner.nextLine();
                    for (Filme f : filmes) {
                        if (f.getNome().equals(nomeRemover)) {
                            filmes.remove(f);
                            System.out.println("Filme removido com sucesso.");
                            break;
                        }
                    }
                    System.out.println("Pressione enter para continuar.");
                    scanner.nextLine();
                    break;
                case 5:
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    System.out.println(
                            "Fechando o sistema..\n" + "==============================\n" + "Até a próxima...");
                    scanner.close();

                    break;
                default:
                    System.out.print("\033[H\033[2J");
                    System.out.flush();
                    System.out.println("Opção inválida");
                    System.out.println("Pressione enter para continuar");
                    scanner.nextLine();
                    break;
            }
        }
    }
}