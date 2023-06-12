package Prova.Q1;

public class Endereco {
    private String rua;
    private int numero;

    public Endereco(String rua, int numero) {
        this.rua = rua;
        this.numero = numero;
    }

    public void atualizaRua(String rua) {
        this.rua = rua;
    }

    public void atualizaNumero(int numero) {
        this.numero = numero;
    }

    public String getRua() {
        return rua;
    }

    public int getNumero() {
        return numero;
    }

    @Override

    public String toString() {
        return "Endereco [numero=" + numero + ", rua=" + rua + "]";
    }
}
