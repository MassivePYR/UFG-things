package ListaDeHeranca.Ex1;

public class Comissionado extends Funcionario {
     private Double salarioMensal;
     private Double totalVendas;
     private Double percentualComissao;

     public Comissionado(String nome, String sobrenome, Double salarioMensal, Double totalVendas,
               Double percentualComissao) {
          super(nome, sobrenome);
          this.salarioMensal = salarioMensal;
          this.totalVendas = totalVendas;
          this.percentualComissao = percentualComissao;
     }

     public void setSalarioMensal(Double salario) {
          this.salarioMensal = salario;
     }

     public void setTotalVendas(Double totalVendas) {
          this.totalVendas = totalVendas;
     }

     public void setPercentualComissao(Double percentualComissao) {
          this.percentualComissao = percentualComissao;
     }

     public Double getSalarioMensal() {
          return this.salarioMensal;
     }

     public Double getTotalVendas() {
          return this.totalVendas;
     }

     public Double getPercentualComissao() {
          return this.percentualComissao;
     }

     public String getSalario() {
          Double salario = this.salarioMensal + (this.totalVendas * this.percentualComissao);
          return "Salário: " + salario;
     }
}
