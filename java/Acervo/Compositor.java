public class Compositor {
    private String nome;
    private String nacionalidade;

    public String getCompNome() {
        return nome;
    }

    public void setCNome(String nome) {
        this.nome = nome;
    }

    public String getCompNacionalidade() {
        return nacionalidade;
    }

    public void setCompNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public Compositor(String nome, String nacionalidade) {
        this.nome = nome;
        this.nacionalidade = nacionalidade;
    }
}