import java.util.Scanner;

public class ExercLab1_2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        cursos curso1 = new cursos();
        cursos curso2 = new cursos();
        cursos curso3 = new cursos();
        cursos curso4 = new cursos();

        System.out.println("Digite o nome do curso 1: ");
        curso1.nome = sc.nextLine();
        System.out.println("Digite a carga horária do curso 1: ");
        curso1.cargaHoraria = sc.nextInt();
        sc.nextLine();
        System.out.println("Digite o nome do professor do curso 1: ");
        curso1.professor = sc.nextLine();
        System.out.println("Digite o turno do curso 1: ");
        curso1.turno = sc.nextLine();

        System.out.println("Digite o nome do curso 2: ");
        curso2.nome = sc.nextLine();
        System.out.println("Digite a carga horária do curso 2: ");
        curso2.cargaHoraria = sc.nextInt();
        sc.nextLine();
        System.out.println("Digite o nome do professor do curso 2: ");
        curso2.professor = sc.nextLine();
        System.out.println("Digite o turno do curso 2: ");
        curso2.turno = sc.nextLine();

        System.out.println("Digite o nome do curso 3: ");
        curso3.nome = sc.nextLine();
        System.out.println("Digite a carga horária do curso 3: ");
        curso3.cargaHoraria = sc.nextInt();
        sc.nextLine();
        System.out.println("Digite o nome do professor do curso 3: ");
        curso3.professor = sc.nextLine();
        System.out.println("Digite o turno do curso 3: ");
        curso3.turno = sc.nextLine();

        System.out.println("Digite o nome do curso 4: ");
        curso4.nome = sc.nextLine();
        System.out.println("Digite a carga horária do curso 4: ");
        curso4.cargaHoraria = sc.nextInt();
        sc.nextLine();
        System.out.println("Digite o nome do professor do curso 4: ");
        curso4.professor = sc.nextLine();
        System.out.println("Digite o turno do curso 4: ");
        curso4.turno = sc.nextLine();

        System.out.println("Curso 1: " + curso1.nome + ", " + curso1.cargaHoraria + ", " + curso1.professor + ", " + curso1.turno);
        System.out.println("Curso 2: " + curso2.nome + ", " + curso2.cargaHoraria + ", " + curso2.professor + ", " + curso2.turno);
        System.out.println("Curso 3: " + curso3.nome + ", " + curso3.cargaHoraria + ", " + curso3.professor + ", " + curso3.turno);
        System.out.println("Curso 4: " + curso4.nome + ", " + curso4.cargaHoraria + ", " + curso4.professor + ", " + curso4.turno);

    }
}