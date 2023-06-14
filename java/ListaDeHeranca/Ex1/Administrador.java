package ListaDeHeranca.Ex1;

public class Administrador extends Funcionario {
    private Double salario;

    public Administrador(String nome, String sobrenome, Double salario) {
        super(nome, sobrenome);
        this.salario = salario;
    }

    public void setSalario(Double salario) {
        this.salario = salario;
    }

    public String getSalario() {
        return "Salário: " + this.salario;
    }
}
