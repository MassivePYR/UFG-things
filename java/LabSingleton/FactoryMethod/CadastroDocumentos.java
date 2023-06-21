package FactoryMethod;

public class CadastroDocumentos {
    
    public static void main(String[] args) {
        Fabrica fabrica = new FabricaDocumentos();
        Documento telegrama = fabrica.criarDocumento(1, "João", "Telegrama");
        Documento carta = fabrica.criarDocumento(2, "Maria", "Carta");
        Documento notificacao = fabrica.criarDocumento(3, "José", "Notificação");
        System.out.println(telegrama);
        System.out.println(carta);
        System.out.println(notificacao);
    }
}
