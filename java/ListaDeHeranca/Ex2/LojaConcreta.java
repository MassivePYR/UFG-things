package ListaDeHeranca.Ex2;

import javax.swing.JOptionPane;

class LojaConcreta extends Loja {
    private String endereco;
    private String gerente;

    public LojaConcreta(int identificador, String cnpj, String razaoSocial, String endereco, String gerente) {
        super(identificador, cnpj, razaoSocial);
        this.endereco = endereco;
        this.gerente = gerente;
    }

    public void mostrarDadosLoja() {
        terminalLimpo();
        JOptionPane.showMessageDialog(null, "Identificador: " + super.identificador + "\nEndereço: " + endereco
                + "\nGerente: " + gerente + "\n" + super.getDadosLoja());
    }

    public static void terminalLimpo() {
        System.out.println("\033[H\033[2J");
        System.out.flush();
    }
}