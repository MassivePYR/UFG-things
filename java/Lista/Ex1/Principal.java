package Lista.Ex1;

//import java.util.ArrayList;

public class Principal {
    public static void main(String[] args) {
        // ArrayList<Aluno> alunos = new ArrayList<Aluno>();
        // ArrayList<Curso> cursos = new ArrayList<Curso>();

        // Curso curso = new Curso("CC", "Ciência da Computação");

        Aluno aluno = new Aluno("João");
        aluno.matricular(12345, "Engenharia de Software", 2021);
        System.out.println(aluno.toString());

        aluno.curso.setNome("Ciência da Computação");
        aluno.setAno(2022);
        System.out.println(aluno.toString());
    }
}