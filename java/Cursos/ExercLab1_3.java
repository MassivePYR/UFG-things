package Cursos;

import java.util.Scanner;

public class ExercLab1_3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite a quantidade de cursos: ");
        int qtdCursos = sc.nextInt();
        sc.nextLine();
        Cursos[] curso = new Cursos[qtdCursos];
        for (int i = 0; i < qtdCursos; i++) {
            String a, b, c;
            int d;
            System.out.println("Digite o nome do curso " + (i + 1) + ": ");
            a = sc.nextLine();

            System.out.println("Digite a carga horária do curso " + (i + 1) + ": ");
            d = sc.nextInt();
            sc.nextLine();

            System.out.println("Digite o nome do professor do curso " + (i + 1) + ": ");
            b = sc.nextLine();

            System.out.println("Digite o turno do curso " + (i + 1) + ": ");
            c = sc.nextLine();
            curso[i] = new Cursos(a, d, b, c);
        }
        for (int i = 0; i < qtdCursos; i++) {
            System.out.println("Curso " + (i + 1) + ": " + curso[i].getNome() + ", " + curso[i].getCargaHoraria() + ", "
                    + curso[i].getProfessor() + ", " + curso[i].getTurno());
        }
        sc.close();
    }
}
