package ListaDeHeranca.Ex1;

public class Horista extends Funcionario{
    private Double horasTrabalhadas;
    private Double valorHora;

    public Horista(String nome, String sobrenome, Double salario, Double horasTrabalhadas, Double valorHora) {
        super(nome, sobrenome);
        this.horasTrabalhadas = horasTrabalhadas;
        this.valorHora = valorHora;
    }
    public void setHorasTrabalhadas(Double horasTrabalhadas) {
         this.horasTrabalhadas = horasTrabalhadas;
    }
    public void setValorHora(Double valorHora) {
         this.valorHora = valorHora;
    }
    public Double getHorasTrabalhadas() {
         return this.horasTrabalhadas;
    }
    public Double getValorHora() {
         return this.valorHora;
    }
    public String getSalario() {
     Double salario = this.horasTrabalhadas * this.valorHora;
        return "Salário: " + salario;
    }

}
