package Empregado;

import java.util.ArrayList;

public class Empregado {
    private String nome;
    private String matricula;
    private Empresa empresa;

    public Empregado(String nome, String matricula, Empresa empresa) {
        this.nome = nome;
        this.matricula = matricula;
        this.empresa = empresa;
    }

    public String getNome() {
        return nome;
    }

    public String getMatricula() {
        return matricula;
    }

    public Empresa getEmpresa() {
        return empresa;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public void setEmpresa(Empresa empresa) {
        this.empresa = empresa;
    }

    public String toString() {
        return "Empregado: " + nome + "\n" + "Matricula: " + matricula + '\n' + empresa;
    }

    public static void main(String[] args) {
        System.out.println("--------------------------------------------------");
        ArrayList<Empregado> empregados = new ArrayList<Empregado>();

        Empresa empresa = new Empresa("12345678901234", "NetFlix",
                new Endereco("Rua 7", 195, "Bairro da Alegria", "lt.8", "Goiânia", "Goiás"));
        Empregado empregado = new Empregado("Jose", "12345678901", empresa);
        empregados.add(empregado);

        empresa = new Empresa("12345678901235", "Google",
                new Endereco("Rua 2", 456, "Leme", "lt.2", "Petrópolis", "Rio de Janeiro"));
        empregado = new Empregado("Maria", "12345678902", empresa);
        empregados.add(empregado);

        for (Empregado e : empregados) {
            System.out.println(e);
            System.out.println("--------------------------------------------------");
        }

    }

}
