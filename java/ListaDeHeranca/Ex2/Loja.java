package ListaDeHeranca.Ex2;

import javax.swing.JOptionPane;

abstract class Loja implements Registro {
    protected int identificador;
    private String cnpj;
    private String razaoSocial;
    private boolean aberta;

    public Loja(int identificador, String cnpj, String razaoSocial) {
        // fiquei com duvida se o identificador deveria ser autoimplementado então
        // deixei como parametro
        this.identificador = identificador;
        this.cnpj = cnpj;
        this.razaoSocial = razaoSocial;
        this.aberta = false;
    }

    public String getDadosLoja() {
        String status = aberta ? "Aberta" : "Fechada";
        return "Razão Social: " + razaoSocial + "\nCNPJ: " + cnpj + "\nStatus: " + status;
    }

    @Override
    public void registra_abertura_dia() {
        if (!aberta) {
            aberta = true;
            System.out.println("Loja aberta.");
            JOptionPane.showMessageDialog(null, "Loja aberta.");
        } else {
            JOptionPane.showMessageDialog(null, "A loja já está aberta.");
        }
    }

    @Override
    public void registra_fechamento_dia() {
        if (aberta) {
            aberta = false;
            System.out.println("Loja fechada.");
        } else {
            System.out.println("A loja já está fechada.");
        }
    }
}
