package Lista.Ex7;

import java.util.ArrayList;
import java.util.Scanner;

public class Programa1 {
    public static void main(String[] args) {
        // crie 5 funcionários, 2 gerentes e 5 vendedores e armazene-os em um vetor de
        // funcionários arraylist
        ArrayList<Funcionario> funcionarios = new ArrayList<Funcionario>();
        funcionarios.add(new Funcionario("João", "123456789-00", 1000));
        funcionarios.add(new Funcionario("Maria", "123456789-01", 1000));
        funcionarios.add(new Funcionario("José", "123456789-02", 1000));
        funcionarios.add(new Funcionario("Ana", "123456789-03", 1000));
        funcionarios.add(new Funcionario("Pedro", "123456789-04", 1000));
        funcionarios.add(new Gerente("João", "123456789-05", 1000, 1234));
        funcionarios.add(new Gerente("Maria", "123456789-06", 1000, 1234));
        funcionarios.add(new Vendedor("José", "123456789-07", 1000, 0.05));
        funcionarios.add(new Vendedor("Ana", "123456789-08", 1000, 0.05));
        funcionarios.add(new Vendedor("Pedro", "123456789-09", 1000, 0.05));
        funcionarios.add(new Vendedor("João", "123456789-10", 1000, 0.05));
        funcionarios.add(new Vendedor("Maria", "123456789-11", 1000, 0.05));

        // mostre os dados de todos os funcionários e o total de proventos recebidos por
        // cada um
        for (Funcionario f : funcionarios) {
            System.out.println("-----------------------------");
            System.out.println(f.toString());
            System.out.println("Total de proventos: " + f.totalProventos() + "\n");
        }

        // aplique um aumento de 10% para todos os funcionários e mostre os dados de
        // todos os funcionários e o total de proventos recebidos por cada um

        for (Funcionario f : funcionarios) {
            f.aumentaSalario(0.1);
        }

        // ----------------------------------------------------------------------------------------------------------------------
        // interface +Funcionario
        System.out.println("-----------------------------");
        System.out.println("Interface +Funcionario");
        System.out.println("-----------------------------");
        int option = 1;
        Scanner scanner = new Scanner(System.in);
        while (option != 0) {
            System.out.println("Bem vindo ao sistema de gerenciamento de funcionários");
            System.out.println("-----------------------------");
            System.out.println("1 - adicionar um funcionário");
            System.out.println("2 - mostrar os funcionários");
            System.out.println("3 - dar aumento para algum funcionário");
            System.out.println("0 - sair");
            System.out.println("-----------------------------");
            System.out.println("Digite a opção desejada");
            option = scanner.nextInt();

            switch (option) {
                case 1:
                    System.out.println("Digite o nome do funcionário");
                    scanner.nextLine();
                    String nome = scanner.nextLine();
                    System.out.println("Digite o cpf do funcionário");
                    String cpf = scanner.nextLine();
                    System.out.println("Digite o salário do funcionário");
                    double salario = scanner.nextDouble();
                    System.out.println("Digite 1 para gerente ou 2 para vendedor");
                    int tipo = scanner.nextInt();
                    if (tipo == 1) {
                        System.out.println("Digite a senha do gerente");
                        int senha = scanner.nextInt();
                        funcionarios.add(new Gerente(nome, cpf, salario, senha));
                    } else if (tipo == 2) {
                        System.out.println("Digite a comissão do vendedor\n Ex: 0,05 para 5%");
                        scanner.nextLine();
                        double comissao = scanner.nextDouble();
                        funcionarios.add(new Vendedor(nome, cpf, salario, comissao));
                    } else {
                        System.out.println("Tipo inválido");
                    }
                    break;
                case 2:
                    for (Funcionario f : funcionarios) {
                        System.out.println("-----------------------------");
                        System.out.println(f.toString());
                        System.out.println("Total de proventos: " + f.totalProventos() + "\n");
                    }
                    break;
                case 3:
                    System.out.println("Digite o cpf do funcionário");
                    String cpf2 = scanner.nextLine();
                    for (Funcionario f : funcionarios) {
                        if (f.getCpf().equals(cpf2)) {
                            System.out.println("Digite o percentual de aumento");
                            double percentual = scanner.nextDouble();
                            f.aumentaSalario(percentual);
                            System.out.println("Salário atualizado");
                            System.out.println(f.toString());
                            System.out.println("Total de proventos: " + f.totalProventos() + "\n");
                        }
                    }
                    break;
                case 0:
                    System.out.println("Saindo...");
                    scanner.close();
                    break;
                default:
                    System.out.println("Opção inválida");
                    break;
            }
        }
    }
}
