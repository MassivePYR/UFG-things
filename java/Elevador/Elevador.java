
public class Elevador {
	private static int ordem = 1;
	/*
	 * Criar uma classe Elevador para representar o estado dos elevadores de um
	 * prédio.
	 * Um Elevador deve ter sua identificação (número), limite de peso, quantidade
	 * de andares, a situação (ligado ou desligado) e o andar onde ele está.
	 * Crie um construtor da classe Elevador que inicialize o número, limite de
	 * peso, quantidade de andares, situação como desligado e andar 1.
	 * Um elevador deve ter operações para ligar e desligar, subir, descer, sendo
	 * que cada operação deve alterar os atributos de acordo com o que cada um
	 * representa.
	 * As operações de subir e descer devem receber como parâmetro uma quantidade de
	 * andares a subir/descer e alterar o andar do elevador.
	 * O elevador não pode andar (subir ou descer) se estiver desligado, e ao subir
	 * e descer deve respeitar a quantidade de andares.
	 * Criar também uma classe principal que instancie 2 ou mais elevadores e
	 * execute as operações de ligar, desligar, subir, descer, mostrando os dados do
	 * elevador depois de cada operação. No final mostrar o número e o andar onde
	 * cada elevador está.
	 */
	private int nome;
	private int numero;
	private double limitePeso;
	private int qtdeAndares;
	private boolean ligado;
	private int andar;

	public Elevador(int num, double limite, int qtde) {
		this.nome = ordem;
		this.numero = num;
		this.limitePeso = limite;
		this.qtdeAndares = qtde;
		this.ligado = false;
		this.andar = 1;
		ordem++;
	}

	public static void dadosElevador(Elevador elevadorX) {
		System.out.println("Dados do Elevador " + Elevador.getNumero(elevadorX) + ": " + Elevador.isLigado(elevadorX)
				+ " - parado no " + Elevador.getAndar(elevadorX) + "º andar - Total de Andares: "
				+ Elevador.getQtdeAndares(elevadorX) + " - Capacidade: " + Elevador.getLimitePeso(elevadorX) + " Kg.");
	}

	public static int getAndar(Elevador elevadorX) {
		return elevadorX.andar;
	}

	public static int getNumero(Elevador elevadorX) {
		return elevadorX.numero;
	}

	public static double getLimitePeso(Elevador elevadorX) {
		return elevadorX.limitePeso;
	}

	public static int getQtdeAndares(Elevador elevadorX) {
		return elevadorX.qtdeAndares;
	}

	public static String isLigado(Elevador elevadorX) {
		if (elevadorX.ligado == true)
			return "Ligado";
		else
			return "Desligado";
	}

	public void setAndar(int andar) {
		this.andar = andar;
	}

	public void setLigado(boolean ligado) {
		this.ligado = ligado;
	}

	public void setLimitePeso(double limitePeso) {
		this.limitePeso = limitePeso;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public void setQtdeAndares(int qtdeAndares) {
		this.qtdeAndares = qtdeAndares;
	}

	public static void setLigar(Elevador elevadorX) {
		elevadorX.ligado = true;
		System.out.println("Ligando elevador " + elevadorX.numero + " ...\n");
	}

	public static void setMenuLigar(int id, Elevador[] elevador) {
		Elevador.setLigar(elevador[id]);
	}

	public static void setDesligar(Elevador elevadorX) {
		elevadorX.ligado = false;
	}

	public static void setSubir(Elevador elevadorX, int andares) {
		if (elevadorX.ligado) {
			System.out.println("O Elevador " + Elevador.getNumero(elevadorX) + " vai subir " + andares + " andares.\n");
			elevadorX.andar = elevadorX.andar + andares;
			if (elevadorX.andar > elevadorX.qtdeAndares)
				elevadorX.andar = elevadorX.qtdeAndares;
		} else
			System.out.println("O Elevador " + elevadorX.numero + " não subiu pois está desligado.");
	}

	public static void setDescer(Elevador elevadorX, int andares) {
		if (elevadorX.ligado) {
			System.out
					.println("O Elevador " + Elevador.getNumero(elevadorX) + " vai descer " + andares + " andares.\n");
			elevadorX.andar = elevadorX.andar - andares;
			if (elevadorX.andar < 1)
				elevadorX.andar = 1;
		} else
			System.out.println("O Elevador " + elevadorX.numero + " não desceu pois está desligado.");
	}

	public static void comparar(Elevador elevadorX, Elevador elevadorY) {
		if ((elevadorX.numero == elevadorY.numero) && (elevadorX.qtdeAndares == elevadorY.qtdeAndares)) {
			System.out.println("Os elevadores " + elevadorX.nome + " e " + elevadorY.nome + " são iguais");
		} else {
			System.out.println("Os elevadores " + elevadorX.nome + " e " + elevadorY.nome + " são diferentes");
		}
	}

	public static void posicao(Elevador elevador) {
		System.out.println("Elevador : " + elevador.nome + " no " + elevador.andar + "º andar");
	}
}