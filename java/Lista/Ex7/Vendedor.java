package Lista.Ex7;

public class Vendedor extends Funcionario {
    // classe de vendedor onde terá além dos dados de funcionários, um vetor com o
    // total de vendas nos 12 meses do ano e um percentual de comissão
    private double[] vendas = new double[12];
    private double comissao;

    public Vendedor(String nome, String cpf, double salario, double comissao) {
        super(nome, cpf, salario);
        this.comissao = comissao;
    }

    public double getComissao() {
        return comissao;
    }

    public double[] getVendas() {
        return vendas;
    }

    public void setComissao(double comissao) {
        this.comissao = comissao;
    }

    public void setVendas(double[] vendas) {
        this.vendas = vendas;
    }

    public void setVendas(int mes, double valor) {
        this.vendas[mes] = valor;
    }

    public void aumentaSalario(double percentual) {// aumenta o salário de acordo com um percentual recebido
        salario += salario * percentual;
    }

    public double totalVendas() {
        double total = 0;
        for (int i = 0; i < vendas.length; i++) {
            total += vendas[i];
        }
        return total;
    }

    public double totalComissao() {
        double total = 0;
        for (int i = 0; i < vendas.length; i++) {
            total += vendas[i] * comissao;
        }
        return total;
    }

    public double totalProventos() {// função pedida no enunciado, que calcula todo o montante recebido pelo
                                    // vendedor anual.
        return (salario + bonificacao()) * 12 + totalComissao();
    }

    public double totalAnual() {
        return totalVendas() + totalComissao();
    }

    public String toString() {
        return "Nome: " + nome + "\nCPF: " + cpf + "\nSalario: " + salario + "\nComissao: " + comissao + "\nVendas: "
                + totalVendas() + "\nComissao: " + totalComissao() + "\nTotal Anual: " + totalAnual();
    }

}
