package Agenda;

public class Data {
    private int dia;
    private int mes;
    private int ano;

    public Data(int dia, int mes, int ano) {
        if (dia > 31 || dia < 1) {
            System.out.println("Dia inválido");
            return;
        }
        if (mes > 12 || mes < 1) {
            System.out.println("Mês inválido");
            return;
        }
        if (ano < 0) {
            System.out.println("Ano inválido");
            return;
        }
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }

    public String toString() {
        return this.dia + "/" + this.mes + "/" + this.ano;
    }
}
