package Alunos;

public class Alunos {
    String nome;
    int idade;
    String curso;
    int matricula;
    Curso Curso;

    public Alunos(String nome, int idade, String curso, int matricula, Curso Curso) {
        this.nome = nome;
        this.idade = idade;
        this.curso = curso;
        this.matricula = matricula;
        this.Curso = Curso;
    }

    public String toString() {
        return "Nome: " + nome + "\nIdade: " + idade + "\nSigla do Curso: " + curso + "\nMatricula: " + matricula
                + "\nCurso: "
                + Curso.getCNome() + "\nSigla do Curso: " + Curso.getCSigla() + "\nDepartamento: "
                + Curso.getDepartamento().getNome() + "\nSigla do Departamento: " + Curso.getDepartamento().getSigla()
                + "\n";
    }

    public static void main(String[] args) {
        Departamento departamento = new Departamento("Instituto de Informática", "INF");
        Curso curso = new Curso("Sistemas de Informação", "SI", departamento);
        Alunos aluno = new Alunos("Jose", 27, "SI", 123, curso);
        System.out.println("Nome: " + aluno.nome);
        System.out.println("Idade: " + aluno.idade);
        System.out.println("Curso: " + aluno.curso);
        System.out.println("Matricula: " + aluno.matricula);
        System.out.println("Curso: " + aluno.Curso.getCNome());
        System.out.println("Sigla: " + aluno.Curso.getCSigla());
        System.out.println("Departamento: " + aluno.Curso.getDepartamento().getNome());
        System.out.println("Sigla: " + aluno.Curso.getDepartamento().getSigla());
        System.out.println("====================================");
        System.out.println(aluno);

    }
}
