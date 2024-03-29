package Lista.Ex1;

public class Aluno {
	private String nome;
	private int matricula;
	private int ano;
	private String curso;

	Aluno(String nome) {
		this.nome = nome;
	}

	public void matricular(int matricula, String curso, int ano) {
		this.matricula = matricula;
		this.ano = ano;
		this.curso = curso;
		System.out.println("\nAluno matriculado com sucesso!");
	}

	public String toString() {
		return "Aluno : " + nome + " - matricula : " + matricula + " - Curso : " + curso + " - " + ano + "\n";
	}

	public void setCurso(String curso) {
		this.curso = curso;
		System.out.println("\nCurso alterado com sucesso!");
	}

	public void setAno(int ano) {
		this.ano = ano;
	}
}
