package Lista.Ex1;

public class Curso {
    private String sigla;
    private String nome;

    public Curso(String nome) {
        this.nome = nome;
    }

    public Curso(String sigla, String nome) {
        this.sigla = sigla;
        this.nome = nome;
    }

    public String getSigla() {
        return sigla;
    }

    public String getNome() {
        return nome;
    }

    public void setSigla(String sigla) {
        this.sigla = sigla;
    }

    public Curso setNome(String nome) {
        this.nome = nome;
        return null;
    }
}
