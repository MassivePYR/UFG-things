package Prova.Q1;

public class Carro extends Veiculo{
    private String acessorios;

    public Carro(String marca, String modelo, Double preco, String acessorios) {
        super(marca, modelo, preco);
        this.acessorios = acessorios;
    }

    public String getAcessorios() {
        return acessorios;
    }

    public void atualizaAcessorios(String string) {
        this.acessorios = string;
    }

    @Override

    public String toString() {
        return "Carro [acessorios=" + acessorios + ", marca=" + getMarca() + ", modelo=" + getModelo() + ", preco=" + getPreco() + "]";
    }



}
