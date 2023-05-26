package Lista.Ex9;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Livro> livros = new ArrayList<>();
        int opcao = 1;
        while (opcao != 0) {
            limpaterminal();
            System.out.println("Menu");
            System.out.println("--------------------");
            System.out.println("1 - Cadastrar livro");
            System.out.println("2 - Listar livros por autor");
            System.out.println("3 - Listar todos os livros");
            System.out.println("4 - Listar Autores");
            System.out.println("0 - Sair");
            System.out.println("--------------------");
            System.out.println("Digite a opção desejada: ");
            opcao = scanner.nextInt();
            switch (opcao) {
                case 1:// cadastrar livro
                    limpaterminal();
                    System.out.println("Digite o título do livro: ");
                    scanner.nextLine();
                    String titulo = scanner.nextLine();
                    System.out.println("Digite o gênero do livro: ");
                    String genero = scanner.nextLine();
                    System.out.println("Digite o nome do autor do livro: ");
                    String nomeAutor = scanner.nextLine();
                    System.out.println("Digite o sobrenome do autor do livro: ");
                    String sobrenomeAutor = scanner.nextLine();
                    System.out.println("Digite o nome intermediário do autor do livro: ");
                    String nomeIntermediarioAutor = scanner.nextLine();
                    System.out.println("Digite o nome da editora do livro: ");
                    String editora = scanner.nextLine();
                    System.out.println("Digite a edição do livro: ");
                    String edicao = scanner.nextLine();
                    System.out.println("Digite o ano do livro: ");
                    int ano = scanner.nextInt();
                    System.out.println("Digite o local do livro: ");
                    String local = scanner.nextLine();
                    Pessoa autor = new Pessoa(nomeAutor, sobrenomeAutor, nomeIntermediarioAutor);
                    Livro livro = new Livro(titulo, autor, editora, edicao, ano, local, genero);
                    livros.add(livro);
                    break;

                case 2:// listar livros por autor
                    limpaterminal();
                    System.out.println("Digite o nome do autor a ser listado: ");
                    scanner.nextLine();
                    String nomeAutorListar = scanner.nextLine().toLowerCase();
                    System.out.println("Digite o sobrenome do autor a ser listado: ");
                    String sobrenomeAutorListar = scanner.nextLine().toLowerCase();
                    limpaterminal();
                    for (Livro livro2 : livros) {
                        Pessoa autor2 = livro2.getAutor();
                        if (autor2.getNome().toLowerCase().equals(nomeAutorListar)
                                && autor2.getSobrenome().toLowerCase().equals(sobrenomeAutorListar)) {
                            System.out.println(livro2.obterReferencia());
                            System.out.println();
                        }
                    }
                    System.out.println("--------------------");
                    System.out.println("Digite enter para continuar...");
                    scanner.nextLine();

                    break;
                case 3:// listar todos os livros
                    limpaterminal();
                    for (Livro livro2 : livros) {
                        System.out.println("--------------------");
                        System.out.println(livro2.obterReferencia());
                        System.out.println("--------------------");
                    }
                    scanner.nextLine();
                    scanner.nextLine();
                    System.out.println("Digite enter para continuar...");
                    break;
                case 4:// listar autores
                    limpaterminal();
                    Map<String, Integer> totalAutores = new HashMap<>();
                    for (Livro livro2 : livros) {
                        Pessoa autor2 = livro2.getAutor();
                        String nomeAutor2 = autor2.getNome();
                        String sobrenomeAutor2 = autor2.getSobrenome();
                        String nomeIntermediarioAutor2 = autor2.getNomeIntermediario();
                        String nomeAutorFormatado = nomeAutor2 + " " + sobrenomeAutor2 + " " + nomeIntermediarioAutor2;
                        if (totalAutores.containsKey(nomeAutorFormatado)) {
                            int total = totalAutores.get(nomeAutorFormatado);
                            totalAutores.put(nomeAutorFormatado, total + 1);
                        } else {
                            totalAutores.put(nomeAutorFormatado, 1);
                        }
                    }
                    for (Map.Entry<String, Integer> entry : totalAutores.entrySet()) {
                        String nomeAutor2 = entry.getKey();
                        int quantidade = entry.getValue();
                        System.out.println(nomeAutor2 + ": " + quantidade);
                    }
                    scanner.nextLine();
                    scanner.nextLine();
                    System.out.println("--------------------");
                    System.out.println("Digite enter para continuar...");
                    break;
                case 9:// Adiciona alguns livros para teste
                    limpaterminal();
                    Livro livro2 = new Livro("As Trancinhas da Vovó Careca",
                            new Pessoa("Jose", "Jeovah", "dos Reis Neto"), "Casa", "1", 2023, "Goiânia", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("A hora da estrela",
                            new Pessoa("Clarice", "Lispector", "Lispector"), "Arqueiro", "1", 2002, "Brasil", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("Guia do mochileiro das galáxias - O Restaurante no Fim do Universo",
                            new Pessoa("Douglas", "Adams", "Noel"), "Arqueiro", "1", 2002, "Inglaterra", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("Guia do mochileiro das galáxias - Até mais, e obrigado pelos peixes!",
                            new Pessoa("Douglas", "Adams", "Noel"), "Arqueiro", "1", 2002, "Inglaterra", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("A Divina Comédia",
                            new Pessoa("Dante", "Alighieri", "de"), "Arqueiro", "1", 2002, "Italia", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("Poeira em alto mar",
                            new Pessoa("Jose", "Jeovah", "dos Reis Neto"), "Casa", "1", 2002, "Goiânia", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("O Pequeno Príncipe",
                            new Pessoa("Antoine", "Saint-Exupéry", "de"), "Arqueiro", "1", 2023, "França", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("O Poderoso Chefão",
                            new Pessoa("Mario", "Puzo", "puzo"), "Arqueiro", "1", 2009, "Italia", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("O Senhor dos Anéis",
                            new Pessoa("J.R.", "Tolkien", "R"), "Arqueiro", "1", 2002, "Inglaterra", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("O Hobbit",
                            new Pessoa("J.R.", "Tolkien", "R"), "Arqueiro", "1", 2002, "Inglaterra", "Ficção");
                    livros.add(livro2);
                    livro2 = new Livro("O Silmarillion",
                            new Pessoa("J.R.", "Tolkien", "R"), "Arqueiro", "1", 2002, "Inglaterra", "Ficção");
                    livros.add(livro2);
                    break;
                case 0:
                    limpaterminal();
                    System.out.println("Saindo...\n");
                    scanner.close();
                    break;
                default:
                    limpaterminal();
                    System.out.println("Opção inválida!");
                    break;
            }
        }
        limpaterminal();

        int totalLivros = livros.size();
        Map<String, Integer> totalGeneros = contarGeneros(livros);

        for (Livro livro : livros) {
            System.out.println(livro.obterReferencia());
            System.out.println();
        }

        System.out.println("Total de livros criados: " + totalLivros);
        System.out.println("Totais por gênero:");
        for (Map.Entry<String, Integer> entry : totalGeneros.entrySet()) {
            String genero = entry.getKey();
            int quantidade = entry.getValue();
            System.out.println(genero + ": " + quantidade);
        }
    }

    public static Map<String, Integer> contarGeneros(List<Livro> livros) {
        Map<String, Integer> totalGeneros = new HashMap<>();

        for (Livro livro : livros) {
            String genero = livro.getGenero();
            totalGeneros.put(genero, totalGeneros.getOrDefault(genero, 0) + 1);
        }
        return totalGeneros;
    }

    public static void limpaterminal() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
}
