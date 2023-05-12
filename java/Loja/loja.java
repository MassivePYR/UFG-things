package Loja;

import java.util.Scanner;

public class loja {
    public class pessoa {
        String nome;
        int telefone;
    }

    public class pessoaFisica extends pessoa {
        String cpf;
        String sexo;
        String estadoCivil;
    }

    public class pessoaJuridica extends pessoa {
        String cnpj;
        String razaoSocial;
    }

    public class cliente extends pessoaFisica {
        double renda;
        String interresses;
        String profissao;
    }loja.cliente(string nome, String cpf, int sexo, int estadoCivil, int renda, int interresses, int profissao){
        super(nome, telefone, cpf, sexo, estadoCivil);
        this.renda = renda;
        this.interresses = interresses;
        this.profissao = profissao;
    }

    public class funcionario extends pessoaFisica {
        int matricula;
        double salario;
        String turno;
    }

    public class fornecedor extends pessoaJuridica {
        String produto;
        String endereco;
        String telefone;
    }

    public class main {
        public static void main(String[] args) {
            System.out.println("Bem-vindo sistema cadastro");
            System.out.println("--------------------------");
            System.out.println("Escolha uma opção:");
            System.out.println("1 - Cadastrar cliente");
            System.out.println("2 - Cadastrar funcionário");
            System.out.println("3 - Cadastrar fornecedor");
            System.out.println("4 - Sair");
            Scanner sc = new Scanner(System.in);
            int opcao = sc.nextInt();
            switch (opcao) {
                case 1:
                    cs = new cliente();

                    System.out.println("Insira o nome do cliente");
                    String nome = sc.next();
                    System.out.println("Insira o telefone do cliente");
                    int telefone = sc.nextInt();
                    System.out.println("Insira o cpf do cliente");
                    String cpf = sc.next();
                    System.out.println("Insira o sexo do cliente:M:Masculino F:Feminino");
                    String sexo = sc.nextLine();
                    System.out.println("Insira o estado civil do cliente");
                    String estadoCivil = sc.next();
                    System.out.println("Insira a renda do cliente");
                    double renda = sc.nextDouble();
                    System.out.println("Insira os interresses do cliente");
                    String interresses = sc.next();
                    System.out.println("Insira a profissão do cliente");
                    String profissao = sc.next();
                    System.out.println("Cliente cadastrado com sucesso");
                    break;
                case 2:
                    System.out.println("Cadastrar funcionário");
                    break;
                case 3:
                    System.out.println("Cadastrar fornecedor");
                    break;
                case 4:
                    System.out.println("Sair");
                    break;
                default:
                    System.out.println("Opção inválida");
                    break;
            }
        }
    }
}
