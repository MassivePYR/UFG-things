package Lista.Ex7;

import java.util.ArrayList;

public class Empresa {
    private String cnpj;
    private String nome;
    private ArrayList<Funcionario> funcionarios = new ArrayList<Funcionario>();

    public Empresa(String cnpj, String nome) {
        this.cnpj = cnpj;
        this.nome = nome;
    }

    public void adicionaFuncionario(Funcionario f) {
        funcionarios.add(f);
    }

    public void mostraFuncionarios() {
        for (Funcionario f : funcionarios) {
            System.out.println(f.toString());
        }
    }

    public String getCnpj() {
        return cnpj;
    }

    public String getNome() {
        return nome;
    }
}
