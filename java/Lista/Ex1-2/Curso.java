
public class Curso {
    private String sigla;
    private String nome;

    public Curso(String sigla, String nome) {
        this.sigla = sigla;
        this.nome = nome;
    }

    public void setCurso(String sigla, String nome) {
        this.nome = nome;
        this.sigla = sigla;
    }

    public String getSigla() {
        return this.sigla;
    }

    public String getNome() {
        return this.nome;
    }
}
