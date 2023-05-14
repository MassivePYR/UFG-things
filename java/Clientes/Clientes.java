package Clientes;

import java.util.ArrayList;

public class Clientes {
    private String nome;
    private String cpf;
    private Endereco endereco;

    public Clientes(String nome, String cpf, Endereco endereco) {
        this.nome = nome;
        this.cpf = cpf;
        this.endereco = endereco;
    }

    public String getNome() {
        return nome;
    }

    public String getCpf() {
        return cpf;
    }

    public Endereco getEndereco() {
        return endereco;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCpf(String cpf) {
        if (cpf.length() == 11) {
            this.cpf = cpf;
        } else {
            System.out.println("CPF inválido!");
        }
    }

    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }

    public void imprimir() {
        System.out.println("Nome: " + this.nome);
        System.out.println("CPF: " + this.cpf);
        System.out.println("Endereço: " + this.endereco.getRua() + ", " + this.endereco.getNumero() + ", "
                + this.endereco.getBairro() + ", " + this.endereco.getComplemento() + ", " + this.endereco.getCidade()
                + ", " + this.endereco.getEstado());
    }

    public static void main(String[] args) {
        ArrayList<Clientes> clientes = new ArrayList<Clientes>();

        Endereco endereco = new Endereco("Rua 1", 123, "Bairro 1", "Complemento 1", "Cidade 1", "Estado 1");
        Clientes cliente = new Clientes("Jose", "12345678901", endereco);
        clientes.add(cliente);

        endereco = new Endereco("Rua 2", 456, "Bairro 2", "Complemento 2", "Cidade 2", "Estado 2");
        cliente = new Clientes("Maria", "12345678902", endereco);
        clientes.add(cliente);

        endereco = new Endereco("Rua 3", 789, "Bairro 3", "Complemento 3", "Cidade 3", "Estado 3");
        cliente = new Clientes("Joao", "12345678903", endereco);
        clientes.add(cliente);

        for (Clientes c : clientes) {
            c.imprimir();
            System.out.println();
        }

        clientes.get(0).setNome("Jose da Silva");
        clientes.get(0).imprimir();
    }
}
