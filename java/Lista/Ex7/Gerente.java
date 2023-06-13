package Lista.Ex7;

public class Gerente extends Funcionario {
    private int senha;

    public Gerente(String nome, String cpf, double salario, int senha) {
        super(nome, cpf, salario);
        this.senha = senha;
    }

    public int getSenha() {
        return senha;
    }

    public void setSenha(int senha) {
        this.senha = senha;
    }

    public void aumentaSalario(double percentual) {
        salario += salario * percentual;
    }

    public double bonificacao() {// metodo de bonificação de 15%
        double b = salario * 0.15;
        return b;
    }

}
