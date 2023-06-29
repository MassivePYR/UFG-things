package ListaDeHeranca.Ex1;

public class Gerente extends Funcionario {
     private Double salarioMensal;
     private Double bonificacao;

     public Gerente(String nome, String sobrenome, Double salario, Double bonificacao) {
          super(nome, sobrenome);
          this.salarioMensal = salario;
          this.bonificacao = bonificacao;
     }

     public void setBonificacao(Double bonificacao) {
          this.bonificacao = bonificacao;
     }

     public void setSalarioMensal(Double salario) {
          this.salarioMensal = salario;
     }

     public Double getBonificacao() {
          return this.bonificacao;
     }

     public Double getSalarioMensal() {
          return this.salarioMensal;
     }

     public String getSalario() {
          double salario = this.salarioMensal + this.bonificacao;
          return "Salário: " + salario;
     }
}
