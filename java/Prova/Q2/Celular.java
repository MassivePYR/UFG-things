package Prova.Q2;

public class Celular {
    private String marca;
    private String modelo;
    private String cor;


    public Celular(String marca, String modelo) {
        this.marca = marca;
        this.modelo = modelo;
    }

    public Celular(String marca) {
        this.marca = marca;
    }

    public void atualizaMarca(String marca) {
        this.marca = marca;
    }

    public void atualizaModelo(String modelo) {
        this.modelo = modelo;
    }

    public void atualizaCor(String cor) {
        this.cor = cor;
    }

    public String getMarca() {
        return marca;
    }

    public String getModelo() {
        return modelo;
    }

    public String getCor() {
        return cor;
    }


}

