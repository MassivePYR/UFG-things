package Lista.Ex1;

public class Aluno {
	private String nome;
	private int matricula;
	private int ano;
	Curso curso;

	public Aluno(String nome) {
		this.nome = nome;
	}

	public void matricular(int matricula, String nomeCurso, int ano) {
		this.matricula = matricula;
		this.ano = ano;
		this.curso = curso.setNome(nomeCurso);

	}

	public String toString() {
		return "Aluno: " + nome + " - Matrícula: " + matricula + " - Curso: " + curso.getSigla() + " - " + ano;
	}

	public void setCurso(String sigla, String nomeCurso) {
		this.curso = new Curso(sigla, nomeCurso);
	}

	public void setAno(int ano) {
		this.ano = ano;
	}
}
