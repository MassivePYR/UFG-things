package Prova.Q1;

import java.util.ArrayList;

public class Concessionaria {
    private String nome;
    private Endereco endereco;
    private ArrayList<Veiculo> veiculos = new ArrayList<Veiculo>();

    public Concessionaria(String nome, Endereco endereco) {
        this.nome = nome;
        this.endereco = endereco;
    }

    public void adicionaVeiculo(Veiculo veiculo) {
        this.veiculos.add(veiculo);
    }

    public void removeVeiculo(Veiculo veiculo) {
        this.veiculos.remove(veiculo);
    }

    public void atualizaNome(String nome) {
        this.nome = nome;
    }

    public void atualizaEndereco(Endereco endereco) {
        this.endereco = endereco;
    }

    public String getNome() {
        return nome;
    }

    public Endereco getEndereco() {
        return endereco;
    }

    public ArrayList<Veiculo> getVeiculos() {
        return veiculos;
    }
    


}
