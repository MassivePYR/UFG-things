package Lista.Ex8;

import java.util.ArrayList;
import java.util.Calendar;
import java.util.Random;
import java.util.Scanner;

public class Relogios {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Horario> relogios = new ArrayList<Horario>();
        terminalLimpo();
        int opcao = 0, cont = 0;

        while (opcao != 8) {
            terminalLimpo();
            menuPrincipal(cont);
            opcao = input.nextInt();
            switch (opcao) {
                case 1:// Criar relogios
                    terminalLimpo();

                    System.out.println("Digite a hora: ");
                    int h = input.nextInt();
                    System.out.println("Digite o minuto: ");
                    int m = input.nextInt();
                    System.out.println("Digite o segundo: ");
                    int s = input.nextInt();
                    Horario horario = new Horario(h, m, s);
                    relogios.add(horario);
                    terminalLimpo();
                    System.out.println("---------------------------------");
                    System.out.println("Relogio criado com sucesso!");
                    cont += 5;
                    System.out.println("---------------------------------");
                    mostrarHorario(horario);
                    System.out.println("---------------------------------");
                    System.out.println("Indice do relogio: " + relogios.size());
                    System.out.println("---------------------------------");
                    System.out.println("\nAperte enter para continuar...");
                    input.nextLine();
                    input.nextLine();
                    break;
                case 2:// Comparar horarios
                    if (cont >= 10) {
                        terminalLimpo();

                        System.out.println("Digite o indice do primeiro relógio: ");
                        int in1 = (input.nextInt() - 1);
                        if (in1 > relogios.size() || in1 < 0) {
                            System.out.println("Indice inválido!");
                            System.out.println("\nAperte enter para continuar...");
                            input.nextLine();
                            input.nextLine();
                            break;
                        }

                        System.out.println("\nDigite o indice do segundo relógio: ");
                        int in2 = (input.nextInt() - 1);
                        if (in2 > relogios.size() || in2 < 0) {
                            System.out.println("Indice inválido!");
                            System.out.println("\nAperte enter para continuar...");
                            input.nextLine();
                            input.nextLine();
                            break;
                        }

                        compararHorarios(relogios.get(in1), relogios.get(in2));
                        System.out.println("Aperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    } else {
                        terminalLimpo();
                        System.out.println("---------------------------------");
                        System.out.println("Crie pelo menos dois relógios primeiro!");
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    }
                    break;
                case 3:// Atualizar horario
                    if (cont >= 5) {
                        terminalLimpo();

                        System.out.println("Digite o indice do relógio a ser atualizado: ");
                        int indice = (input.nextInt() - 1);
                        if (indice > relogios.size() || indice < 0) {
                            System.out.println("Indice inválido!");
                            System.out.println("\nAperte enter para continuar...");
                            input.nextLine();
                            input.nextLine();
                            break;
                        }
                        System.out.println("Digite a hora: ");
                        int hora = input.nextInt();
                        System.out.println("Digite o minuto: ");
                        int minuto = input.nextInt();
                        System.out.println("Digite o segundo: ");
                        int segundo = input.nextInt();
                        relogios.get(indice).atualizarHorario(hora, minuto, segundo);
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                    } else {
                        terminalLimpo();
                        System.out.println("---------------------------------");
                        System.out.println("Crie pelo menos um relógio primeiro!");
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    }
                    break;
                case 4:// Atualizar hora
                    if (cont >= 5) {
                        terminalLimpo();

                        System.out.println("Digite o indice do relógio a ser atualizado: ");
                        int indice = (input.nextInt() - 1);
                        if (indice > relogios.size() || indice < 0) {
                            System.out.println("Indice inválido!");
                            System.out.println("\nAperte enter para continuar...");
                            input.nextLine();
                            input.nextLine();
                            break;
                        }
                        System.out.println("Digite a hora: ");
                        int hora = input.nextInt();
                        relogios.get(indice).atualizarHora(hora);
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    } else {
                        System.out.print("\033[H\033[2J");
                        System.out.flush();
                        System.out.println("---------------------------------");
                        System.out.println("Crie pelo menos um relógio primeiro!");
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    }
                    break;
                case 5:// Atualizar minuto
                    if (cont >= 5) {
                        terminalLimpo();

                        System.out.println("Digite o indice do relógio a ser atualizado: ");
                        int indice = (input.nextInt() - 1);
                        if (indice > relogios.size() || indice < 0) {
                            System.out.println("Indice inválido!");
                            System.out.println("\nAperte enter para continuar...");
                            input.nextLine();
                            input.nextLine();
                            break;
                        }
                        System.out.println("Digite o minuto: ");
                        int minuto = input.nextInt();
                        relogios.get(indice).atualizarMinuto(minuto);
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    } else {
                        terminalLimpo();
                        System.out.println("---------------------------------");
                        System.out.println("Crie pelo menos um relógio primeiro!");
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    }
                    break;
                case 6:// Atualizar segundo
                    if (cont >= 5) {
                        terminalLimpo();

                        System.out.println("Digite o indice do relógio a ser atualizado: ");
                        int indice = (input.nextInt() - 1);
                        if (indice > relogios.size() || indice < 0) {
                            System.out.println("Indice inválido!");
                            System.out.println("\nAperte enter para continuar...");
                            input.nextLine();
                            input.nextLine();
                            break;
                        }
                        System.out.println("Digite o segundo: ");
                        int segundo = input.nextInt();
                        relogios.get(indice).atualizarSegundo(segundo);
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    } else {
                        terminalLimpo();
                        System.out.println("---------------------------------");
                        System.out.println("Crie pelo menos um relógio primeiro!");
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    }
                    break;
                case 7:// Mostrar horario
                    if (cont >= 5) {
                        terminalLimpo();

                        System.out.println("Digite o indice do relógio a ser exibido:");
                        int indice = (input.nextInt() - 1);
                        if (indice > relogios.size() || indice < 0) {
                            System.out.println("Indice inválido!");
                            System.out.println("\nAperte enter para continuar...");
                            input.nextLine();
                            input.nextLine();
                            break;
                        }
                        relogios.get(indice).mostrarHorario();
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    } else {
                        terminalLimpo();
                        System.out.println("---------------------------------");
                        System.out.println("Crie pelo menos um relógio primeiro!");
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    }
                    break;
                case 8:// Sair
                    terminalLimpo();
                    System.out.println("---------------------------------");
                    System.out.println("Obrigado por utilizar o 'Relogios'\nAté mais...");
                    System.out.println("---------------------------------");
                    input.close();
                    break;
                case 9:// função secreta 1 - Criar relogio aleatorio
                    terminalLimpo();
                    System.out.println("--------- Menu Secreto ---------");
                    System.out.println("---------------------------------");
                    System.out.println("Criando relogio aleatoriamente...");
                    Random random = new Random();
                    int hrs = random.nextInt(24);
                    int min = random.nextInt(60);
                    int sec = random.nextInt(60);
                    horario = new Horario(hrs, min, sec);
                    relogios.add(horario);
                    cont += 5;
                    System.out.println("---------------------------------");
                    System.out.println("Relógio criado com sucesso!\n");
                    System.out.println("Indice do relogio: " + relogios.size());
                    System.out.println("---------------------------------");
                    System.out.println("\nAperte enter para continuar...");
                    input.nextLine();
                    input.nextLine();
                    break;
                case 10:// função secreta 2 - Criar relogio com horario atual
                    terminalLimpo();
                    System.out.println("--------- Menu Secreto ---------");
                    System.out.println("---------------------------------");
                    System.out.println("Criando relogio com horario atual...");
                    relogios.add(criarRelogioAtual());
                    cont += 5;
                    System.out.println("---------------------------------");
                    System.out.println("Relógio criado com sucesso!\n");
                    System.out.println("Indice do relogio: " + relogios.size());
                    System.out.println("---------------------------------");
                    System.out.println("\nAperte enter para continuar...");
                    input.nextLine();
                    input.nextLine();
                    break;
                case 11:// função secreta 3 - Atualizar o horario de um relogio para o atual
                    if (cont >= 5) {
                        terminalLimpo();
                        System.out.println("--------- Menu Secreto ---------");
                        System.out.println("---------------------------------");
                        System.out.println("Digite o indice do relógio a ser atualizado: ");
                        int indice = (input.nextInt() - 1);
                        if (indice > relogios.size() || indice < 0) {
                            System.out.println("Indice inválido!");
                            System.out.println("\nAperte enter para continuar...");
                            input.nextLine();
                            input.nextLine();
                            break;
                        }
                        System.out.println("Atualizando horario...");
                        relogios.get(indice).atualizarHorario(RelogioAgora());
                        System.out.println("---------------------------------");
                        System.out.println("Horario atualizado com sucesso!");
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    } else {
                        terminalLimpo();
                        System.out.println("---------------------------------");
                        System.out.println("Crie pelo menos um relógio primeiro!");
                        System.out.println("---------------------------------");
                        System.out.println("\nAperte enter para continuar...");
                        input.nextLine();
                        input.nextLine();
                    }
                    break;
                default:
                    System.out.println("Opção inválida!");
                    break;
            }

        }
        System.out.println("Fim do programa!");
        System.out.println("Todos os Relogios criados:");
        for (Horario horario : relogios) {
            System.out.println("Relógio " + (relogios.indexOf(horario) + 1) + ":");
            horario.mostrarHorario();
        }

    }

    private static void mostrarHorario(Horario horario) {
        horario.mostrarHorario();
    }

    public static void compararHorarios(Horario horario1, Horario horario2) {
        // metodo estatico para indicar a diferença em minutos entre dois horarios
        // passados por parametro

        int diferenca = 0;

        if (horario1.getHora() > horario2.getHora()) {
            diferenca = (horario1.getHora() - horario2.getHora()) * 60;
        } else {
            diferenca = (horario2.getHora() - horario1.getHora()) * 60;
        }

        if (horario1.getMinuto() > horario2.getMinuto()) {
            diferenca += (horario1.getMinuto() - horario2.getMinuto());
        } else {
            diferenca += (horario2.getMinuto() - horario1.getMinuto());
        }

        System.out.println("\nA diferença entre os horários é de " + diferenca + " minutos");
    }

    public static Horario RelogioAgora() {
        Calendar calendario = Calendar.getInstance();
        int hrs = calendario.get(Calendar.HOUR_OF_DAY);
        int min = calendario.get(Calendar.MINUTE);
        int sec = calendario.get(Calendar.SECOND);
        Horario horario = new Horario(hrs, min, sec);
        return horario;
    }

    public static Horario criarRelogioAtual() {
        Horario horario = new Horario(RelogioAgora());
        return horario;
    }

    public static void terminalLimpo() {
        System.out.println("\033[H\033[2J");
        System.out.flush();
    }

    public static void menuPrincipal(int cont) {
        System.out.println(
                "---------------------------------\nBem vindo ao Relogios\n---------------------------------\nSelecione uma opção:\n1 - Criar horários");
        if (cont >= 10) {
            System.out.println("2 - Comparar horários");
        }
        if (cont >= 5) {
            System.out.println(
                    "3 - Atualizar horário\n4 - Atualizar hora\n5 - Atualizar minuto\n6 - Atualizar segundo\n7 - Mostrar horário\n");
        }
        System.out.println("8 - Sair\n---------------------------------\nOpção: ");
    }
}