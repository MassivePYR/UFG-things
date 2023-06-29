package Lista.Ex1;

public class Principal {
    public static void main(String[] args) {

        limpaTerminal();
        Aluno aluno = new Aluno("Joao");
        aluno.matricular(12345, "Engenharia de Software", 2021);
        System.out.println(aluno.toString());

        aluno.setCurso("Ciencia da Computacao");
        aluno.setAno(2022);
        System.out.println(aluno.toString());
    }

    public static void limpaTerminal() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
}