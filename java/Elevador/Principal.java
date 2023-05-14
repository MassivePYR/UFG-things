
public class Principal {
	// private static int id = 1;

	/*
	 * Criar também uma classe principal que instancie 2 ou mais elevadores e
	 * execute as operações de ligar, desligar, subir, descer, mostrando os dados do
	 * elevador depois de cada operação.
	 * No final mostrar o número dos elevadores e em que andar para um está.
	 */

	public static void main(String[] args) {
		System.out.println("Bem-Vindo ao Elevador!");
		System.out.println("----------------------\n");
		// ----------------Interface----------------
		/*
		 * import java.util.Scanner;
		 * System.out.println("Selecione uma opção:");
		 * System.out.println("1 - Criar Elevador");
		 * System.out.println("2 - Ligar Elevador");
		 * System.out.println("3 - Desligar Elevador");
		 * System.out.println("4 - Subir Elevador");
		 * System.out.println("5 - Descer Elevador");
		 * System.out.println("6 - Mostrar Dados do Elevador");
		 * System.out.println("7 - Comparar Elevadores");
		 * System.out.println("8 - Mostrar Posição do Elevador");
		 * System.out.println("9 - Sair");
		 * System.out.println("----------------------");
		 * Scanner sc = new Scanner(System.in);
		 * int opcao = sc.nextInt();
		 * switch (opcao) {
		 * case 1:
		 * System.out.println("Digite o limite de peso do elevador:");
		 * double limite = sc.nextDouble();
		 * System.out.println("Digite a quantidade de andares do elevador:");
		 * int qtde = sc.nextInt();
		 * Elevador el = new Elevador(id, limite, qtde);
		 * System.out.println("Elevador " + Elevador.getNumero(el) +
		 * " criado com sucesso!");
		 * id++;
		 * break;
		 * 
		 * case 2:
		 * System.out.println("Digite o numero do elevador:");
		 * Elevador.setLigar(Elevador.numero(sc.nextInt(id)));
		 * System.out.println("Elevador " + Elevador.getNumero(id) +
		 * " ligado com sucesso!");
		 * break;
		 * 
		 * case 3:
		 * System.out.println("Digite o número do elevador:");
		 * int num3 = sc.nextInt();
		 * Elevador.setDesligar(num3);
		 * System.out.println("Elevador " + Elevador.getNumero(num3) +
		 * " desligado com sucesso!");
		 * break;
		 * case 4:
		 * System.out.println("Digite o número do elevador:");
		 * int num4 = sc.nextInt();
		 * System.out.println("Digite a quantidade de andares que deseja subir:");
		 * int qtde4 = sc.nextInt();
		 * Elevador.setSubir(num4, qtde4);
		 * System.out.println("Elevador " + Elevador.getNumero(num4) + " subiu " + qtde4
		 * + " andares com sucesso!");
		 * break;
		 * case 5:
		 * System.out.println("Digite o número do elevador:");
		 * int num5 = sc.nextInt();
		 * System.out.println("Digite a quantidade de andares que deseja descer:");
		 * int qtde5 = sc.nextInt();
		 * Elevador.setDescer(num5, qtde5);
		 * System.out.println("Elevador " + Elevador.getNumero(num5) + " desceu " +
		 * qtde5 + " andares com sucesso!");
		 * break;
		 * case 6:
		 * System.out.println("Digite o número do elevador:");
		 * int num6 = sc.nextInt();
		 * Elevador.dadosElevador(num6);
		 * break;
		 * case 7:
		 * System.out.println("Digite o número do primeiro elevador:");
		 * int num7 = sc.nextInt();
		 * System.out.println("Digite o número do segundo elevador:");
		 * int num8 = sc.nextInt();
		 * Elevador.comparar(num7, num8);
		 * break;
		 * case 8:
		 * System.out.println("Digite o número do elevador:");
		 * int num9 = sc.nextInt();
		 * Elevador.mostrarPosicao(num9);
		 * break;
		 * 
		 * case 9:
		 * System.out.println("Obrigado por utilizar o Elevador!\nAté mais!\n");
		 * sc.close();
		 * break;
		 * default:
		 * System.out.println("Opção inválida!");
		 * break;
		 * 
		 * }
		 */
		// -------------ProfessoraData----------------
		Elevador el1 = new Elevador(1, 500.0, 15);
		Elevador.dadosElevador(el1);
		Elevador.setSubir(el1, 5); // mandar subir mas com o elevador desligado - não vai subir
		Elevador.setLigar(el1);
		Elevador.dadosElevador(el1);
		Elevador.setSubir(el1, 20);
		Elevador.dadosElevador(el1);
		Elevador.setDescer(el1, 10);
		Elevador.dadosElevador(el1);
		Elevador el2 = new Elevador(2, 400.0, 10);
		Elevador el3 = new Elevador(3, 400.0, 15);
		Elevador el4 = new Elevador(1, 400.0, 15);
		Elevador.dadosElevador(el2);
		Elevador.setSubir(el2, 2); // mandar subir mas com o elevador desligado - não vai subir
		Elevador.dadosElevador(el2);
		Elevador.setLigar(el2);
		Elevador.dadosElevador(el2);
		Elevador.setSubir(el2, 5);
		Elevador.dadosElevador(el2);
		Elevador.setDescer(el2, 5);
		Elevador.dadosElevador(el2);
		Elevador.dadosElevador(el3);
		System.out.println("------");
		Elevador.comparar(el1, el2);
		Elevador.comparar(el1, el4);
		Elevador.posicao(el1);
		Elevador.posicao(el2);
		Elevador.posicao(el3);
		Elevador.posicao(el4);
	}
}
