package Prova.Q1;

public class Principal {
    
    public static void main(String[] args) {
        Endereco endereco = new Endereco("Rua 1", 1);
        Concessionaria concessionaria = new Concessionaria("Concessionaria 1", endereco);
        Moto moto = new Moto("Honda", "CBX", 48000.0, "Scooter");
        Carro carro = new Carro("Hyundai", "HB-20s", 90000.0, "Sedan");

        concessionaria.adicionaVeiculo(moto);
        concessionaria.adicionaVeiculo(carro);
        System.out.println(concessionaria.getVeiculos());
    }
}
        
