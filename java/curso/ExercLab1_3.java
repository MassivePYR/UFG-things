package curso;

import java.util.Scanner;

public class ExercLab1_3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite a quantidade de cursos: ");
        int qtdCursos = sc.nextInt();
        sc.nextLine();
        cursos[] curso = new cursos[qtdCursos];
        for (int i = 0; i < qtdCursos; i++) {
            curso[i] = new cursos();
            System.out.println("Digite o nome do curso " + (i + 1) + ": ");
            curso[i].nome = sc.nextLine();
            System.out.println("Digite a carga horária do curso " + (i + 1) + ": ");
            curso[i].cargaHoraria = sc.nextInt();
            sc.nextLine();
            System.out.println("Digite o nome do professor do curso " + (i + 1) + ": ");
            curso[i].professor = sc.nextLine();
            System.out.println("Digite o turno do curso " + (i + 1) + ": ");
            curso[i].turno = sc.nextLine();
        }
        for (int i = 0; i < qtdCursos; i++) {
            System.out.println("Curso " + (i + 1) + ": " + curso[i].nome + ", " + curso[i].cargaHoraria + ", "
                    + curso[i].professor + ", " + curso[i].turno);
        }
    }
}
