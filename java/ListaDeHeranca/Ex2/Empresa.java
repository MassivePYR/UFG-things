package ListaDeHeranca.Ex2;

public class Empresa {
    private int indentificador;
    private String cnpj;
    private String razaoSocial;
    private boolean aberta;

    public Empresa(int indentificador, String cnpj, String razaoSocial, boolean aberta) {
        this.indentificador = indentificador;
        this.cnpj = cnpj;
        this.razaoSocial = razaoSocial;
        this.aberta = aberta;
    }
    public int getIndentificador() {
        return this.indentificador;
    }
    public String getCnpj() {
        return this.cnpj;
    }
    public String getRazaoSocial() {
        return this.razaoSocial;
    }
    public String getAberta(){
        return this.aberta ? "Aberta" : "Fechada";
    }
    public void setAberta() {
        this.aberta = true;
    }
    public void setFechada() {
        this.aberta = false;
    }
    public String toString() {
        return "Identificador: " + this.indentificador + "\nCNPJ: " + this.cnpj + "\nRazão Social: " + this.razaoSocial + "\nStatus: " + this.getAberta();
    }
}

