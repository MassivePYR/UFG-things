package Prova.Q1;

public class Veiculo {
    private String marca;
    private String modelo;
    private Double preco;

    public Veiculo(String marca, String modelo, Double preco) {
        this.marca = marca;
        this.modelo = modelo;
        this.preco = preco;
    }

    public void atualizaMarca(String marca) {
        this.marca = marca;
    }

    public void atualizaModelo(String modelo) {
        this.modelo = modelo;
    }

    public void atualizaPreco(Double preco) {
        this.preco = preco;
    }

    public String getMarca() {
        return marca;
    }

    public String getModelo() {
        return modelo;
    }

    public Double getPreco() {
        return preco;
    }

}
