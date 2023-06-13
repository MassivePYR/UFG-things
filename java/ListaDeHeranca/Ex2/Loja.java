package ListaDeHeranca.Ex2;

public class Loja extends Empresa {
    private String endereco;
    private String gerente;

    public Loja(int indentificador, String cnpj, String razaoSocial, String endereco, String gerente) {
        super(indentificador, cnpj, razaoSocial, false);
        this.endereco = endereco;
        this.gerente = gerente;
    }
    public String getEndereco() {
        return this.endereco;
    }
    public String getGerente() {
        return this.gerente;
    }
    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }
    public void setGerente(String gerente) {
        this.gerente = gerente;
    }
    public int getIndentificador() {
        return super.getIndentificador();
    }
    public String getCnpj() {
        return super.getCnpj();
    }
    public String getRazaoSocial() {
        return super.getRazaoSocial();
    }
    public String getAberta(){
        return super.getAberta();
    }
    public void setAberta() {
        super.setAberta();
    }
    public void setFechada() {
        super.setFechada();
    }
    public String toString() {
        return super.toString() + "\nEndereço: " + this.endereco + "\nGerente: " + this.gerente;
    }
    
}
