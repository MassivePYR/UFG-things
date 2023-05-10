package Alunos;

public class Curso {
    private String nome;
    private String sigla;
    Departamento Departamento;

    public Curso(String nome, String sigla, Departamento Departamento) {
        this.nome = nome;
        this.sigla = sigla;
        this.Departamento = Departamento;
    }

    public String getCNome() {
        return nome;
    }

    public String getCSigla() {
        return sigla;
    }

    public Departamento getDepartamento() {
        return Departamento;
    }

    public void setCNome(String nome) {
        this.nome = nome;
    }

    public void setCSigla(String sigla) {
        this.sigla = sigla;
    }

    public void setCDepartamento(Departamento Departamento) {
        this.Departamento = Departamento;
    }
}
