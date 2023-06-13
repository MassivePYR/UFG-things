package Lista.Ex7;

public class Funcionario {
    protected String nome;
    protected String cpf;
    protected double salario;

    public Funcionario(String nome, String cpf, double salario) {
        this.nome = nome;
        this.cpf = cpf;
        this.salario = salario;
    }

    public String getNome() {
        return nome;
    }

    public String getCpf() {
        return cpf;
    }

    public double getSalario() {
        return salario;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public double bonificacao() {// metodo de bonificação de 10%
        double b = salario * 0.10;
        return b;
    }

    // metodo que calcula o total de proventos recebidos pelo funcionário por ano,
    // sendo(salário + bonificação)*12
    public double totalProventos() {
        return (salario + bonificacao()) * 12;
    }

    // um método que aumenta o salário de acordo com um percentual recebido por
    // parâmetro
    public void aumentaSalario(double percentual) {
        salario += salario * percentual;
    }

    // toString
    public String toString() {
        return "Nome: " + nome + "\nCPF: " + cpf + "\nSalário: " + salario;
    }

}
