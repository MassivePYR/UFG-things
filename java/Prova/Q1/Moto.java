package Prova.Q1;

public class Moto extends Veiculo{
    private String tipo;

    public Moto(String marca, String modelo, Double preco, String tipo) {
        super(marca, modelo, preco);
        this.tipo = tipo;

    }

    public String getTipo() {
        return tipo;
    }

    public void atualizaTipo(String tipo) {
        this.tipo = tipo;
    }

    @Override

    public String toString() {
        return "Moto [tipo=" + tipo + ", marca=" + getMarca() + ", modelo=" + getModelo() + ", preco=" + getPreco() + "]";
    }
}
