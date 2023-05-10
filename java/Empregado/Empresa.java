package Empregado;

public class Empresa {
    private String cnpj;
    private String razao;
    private Endereco endereco;

    public Empresa(String cnpj, String razao, Endereco endereco) {
        this.cnpj = cnpj;
        this.razao = razao;
        this.endereco = endereco;
    }

    public String getCnpj() {
        return cnpj;
    }

    public String getRazao() {
        return razao;
    }

    public Endereco getEndereco() {
        return endereco;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public void setRazao(String razao) {
        this.razao = razao;
    }

    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }

    public String toString() {
        return "Empresa: " + razao + "\n" + "CNPJ: " + cnpj + "\n\n" + "Endereço da empresa: \n" + endereco;
    }
}
