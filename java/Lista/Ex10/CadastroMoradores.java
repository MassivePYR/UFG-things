package Lista.Ex10;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Random;
import java.util.Scanner;
import java.util.Set;

public class CadastroMoradores {
    static final int TAMANHO_CODIGO_MAX = 16;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Morador> moradores = new ArrayList<Morador>();
        Set<String> codigosAcesso = new HashSet<>();
        Random random = new Random();
        int opcao = 0;

        while (opcao != 9) {
            menu();
            opcao = scanner.nextInt();
            switch (opcao) {
                case 1:// cadastrar morador
                    while (true) {
                        limpaterminal();
                        System.out.println("Digite o nome do morador: ");
                        scanner.nextLine();
                        String nome = scanner.nextLine();
                        System.out.println("Digite o CPF do morador: \nSomente os numeros");// 000.000.000-00
                        String CPF = scanner.nextLine();
                        System.out.println("Digite o celular do morador: \nSomente os numeros, com ddd");// (00)
                                                                                                         // 00000-0000
                        String celular = scanner.nextLine();
                        System.out.println("Digite a data de nascimento do morador: \nSomente os numeros");// dd/mm/aaaa
                        String dataDeNascimento = scanner.nextLine();
                        System.out.println("Digite o sexo do morador: \nMasculino, Feminino ou Outros");
                        String sexo = scanner.next();
                        System.out.println("Digite o bloco do morador: ");// 1 - A, 2 - B, 3 - C, 4 - D
                        scanner.nextLine();
                        String bloco = scanner.nextLine();
                        System.out.println("Digite o apartamento do morador: ");// 1 - 101, 2 - 102, 3 - 103, 4 - 104
                        String apartamento = scanner.next();

                        String codigoAcesso = gerarCodigoAcessoAleatorio(random, codigosAcesso);// 16 caracteres
                        codigosAcesso.add(codigoAcesso);

                        Morador morador = new Morador(nome, CPF, celular, dataDeNascimento, sexo, bloco, apartamento,
                                codigoAcesso);
                        moradores.add(morador);

                        limpaterminal();
                        System.out.println("Morador cadastrado com sucesso!");
                        morador.mostrarDados();
                        System.out.println("---------------------------------");
                        System.out.println("Cadastrar outro morador? Y-Sim, N-Nao");
                        // se a resposta for sim, volta pro inicio do while
                        String resposta = scanner.next();
                        if (resposta.equals("N") || resposta.equals("n")) {
                            break;
                        }
                        scanner.nextLine();
                        scanner.nextLine();
                    }
                    break;
                case 2:// listar moradores
                    limpaterminal();
                    limpaterminal();
                    System.out.println("Lista de moradores:");
                    for (Morador m : moradores) {
                        System.out.println("---------------------------------");
                        m.mostrarDados();
                    }
                    System.out.println("Pressione enter para continuar...");
                    scanner.nextLine();
                    scanner.nextLine();

                    break;
                case 3:// buscar morador
                    limpaterminal();
                    System.out.println("Digite o CPF do morador: ");
                    String CPFBusca = scanner.next();
                    int cont = 0;
                    for (Morador m : moradores) {
                        if (m.getCPF().equals(CPFBusca)) {
                            m.mostrarDados();
                            cont++;
                        }
                    }
                    if (cont == 0) {
                        System.out.println("Morador nao encontrado!");
                    }

                    System.out.println("---------------------------------");
                    System.out.println("Pressione enter para continuar...");
                    scanner.nextLine();
                    scanner.nextLine();

                    break;
                case 4:// remover morador
                    limpaterminal();
                    System.out.println("Digite o CPF do morador: ");
                    String CPFRemove = scanner.next();
                    for (Morador m : moradores) {
                        if (m.getCPF().equals(CPFRemove)) {
                            moradores.remove(m);
                            System.out.println("Morador removido com sucesso!");
                            scanner.nextLine();
                        }
                    }
                    System.out.println("---------------------------------");
                    System.out.println("Pressione enter para continuar...");
                    scanner.nextLine();
                    scanner.nextLine();
                    break;
                case 5:// alterar morador
                    limpaterminal();
                    System.out.println("Digite o CPF do morador: ");
                    String CPFAltera = scanner.next();
                    for (Morador m : moradores) {
                        if (m.getCPF().equals(CPFAltera)) {
                            System.out.println("Digite o nome do morador: ");
                            String nomeAltera = scanner.next();
                            System.out.println("Digite o celular do morador: ");
                            String celularAltera = scanner.next();
                            System.out.println("Digite a data de nascimento do morador: ");
                            String dataDeNascimentoAltera = scanner.next();
                            System.out.println("Digite o sexo do morador: ");
                            String sexoAltera = scanner.next();
                            System.out.println("Digite o bloco do morador: ");
                            String blocoAltera = scanner.next();
                            System.out.println("Digite o apartamento do morador: ");
                            String apartamentoAltera = scanner.next();
                            System.out.println("Digite o código de acesso do morador: ");
                            String codigodeAcessoAltera = scanner.next();
                            m.setNome(nomeAltera);
                            m.setCelular(celularAltera);
                            m.setDataDeNascimento(dataDeNascimentoAltera);
                            m.setSexo(sexoAltera);
                            m.setBloco(blocoAltera);
                            m.setApartamento(apartamentoAltera);
                            m.setCodigodeAcesso(codigodeAcessoAltera);
                            System.out.println("---------------------------------");
                            System.out.println("Morador alterado com sucesso!");
                            System.out.println("---------------------------------");
                            System.out.println("Pressione enter para continuar...");
                            scanner.nextLine();
                            scanner.nextLine();
                        }
                    }
                    break;
                case 9:// sair
                    System.out.println("Saindo...\n");
                    scanner.close();
                    break;
                default:
                    System.out.println("Opção inválida");
                    break;
            }
        }
        // mostrar Moradores
        for (Morador m : moradores) {
            System.out.println("---------------------------------");
            m.mostrarDados();
        }
    }

    public static void limpaterminal() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }

    public static void menu() {
        limpaterminal();
        System.out.println("Bem vindo ao sistema de cadastro de moradores");
        System.out.println("-------------------------");
        System.out.println("1 - Cadastrar morador");
        System.out.println("2 - Listar moradores");
        System.out.println("3 - Buscar morador");
        System.out.println("4 - Remover morador");
        System.out.println("5 - Alterar morador");
        System.out.println("9 - Sair");
        System.out.println("-------------------------");
        System.out.println("Digite uma opção:");
    }

    private static String gerarCodigoAcessoAleatorio(Random random, Set<String> codigosAcesso) {
        StringBuilder sb = new StringBuilder(TAMANHO_CODIGO_MAX);

        do {
            sb.setLength(0); // Limpar o StringBuilder para gerar um novo código

            for (int i = 0; i < TAMANHO_CODIGO_MAX; i++) {
                int digit = random.nextInt(10);
                sb.append(digit);
            }
        } while (codigosAcesso.contains(sb.toString()));

        return sb.toString();
    }
}