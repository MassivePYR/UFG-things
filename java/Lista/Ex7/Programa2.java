package Lista.Ex7;

import java.util.ArrayList;

public class Programa2 {
    // programa de cadastro para cadastramento da empresa com seus funcionários
    // fazendo as mesmas funções do programa anterior

    public static void main(String[] args) {
        ArrayList<Empresa> empresas = new ArrayList<Empresa>();
        ArrayList<Funcionario> funcionarios = new ArrayList<Funcionario>();

        // crie uma empresa
        Empresa e1 = new Empresa("123456789-00", "Empresa 1");
        empresas.add(e1);
        // crie 5 funcionários, 2 gerentes e 5 vendedores e armazene-os em um vetor de
        // funcionários
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
        // adicione os funcionários na empresa
        for (Funcionario f : funcionarios) {
            e1.adicionaFuncionario(f);
        }
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
            System.out.println("-----------------------------");
            f.aumentaSalario(0.1);
            System.out.println(f.toString());
            System.out.println("Total de proventos: " + f.totalProventos() + "\n");
        }
    }
}
