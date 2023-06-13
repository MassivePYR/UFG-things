
public class Aluno {
	private String nome;
	private int matricula;
	private int ano;
	private Curso curso;

	Aluno(String nome) {
		this.nome = nome;
	}

	public void matricular(int matricula, String sigla, String curso, int ano) {
		this.matricula = matricula;
		this.ano = ano;
		this.curso = new Curso(sigla, curso);
		System.out.println("\nAluno matriculado com sucesso!");
	}

	public void refazerMatricula(int matricula, String sigla, String curso, int ano) {
		this.matricula = matricula;
		this.ano = ano;
		this.curso.setCurso(sigla, curso);
		System.out.println("\nMatricula alterada com sucesso!");
	}

	public String toString() {
		return "Aluno : " + nome + " - matricula : " + matricula + " - Sigla do Curso : " + curso.getSigla()
				+ " - Curso : " + curso.getNome() + " - " + ano + "\n";
	}

	public void setAno(int ano) {
		this.ano = ano;
	}
}
