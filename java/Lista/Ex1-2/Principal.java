
public class Principal {
    public static void main(String[] args) {

        limpaTerminal();
        // cria aluno, matricula e imprime, depois altera curso e ano e imprime
        // novamente
        Aluno aluno = new Aluno("João");
        aluno.matricular(123, "ADS", "Análise e Desenvolvimento de Sistemas", 2019);
        System.out.println(aluno);

        aluno.refazerMatricula(123, "SI", "Sistemas da Informação", 2020);
        System.out.println(aluno);

    }

    public static void limpaTerminal() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
}