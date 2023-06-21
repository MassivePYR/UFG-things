package FactoryMethod;

public class FabricaDocumentos extends Fabrica{
    
    public Documento criarDocumento(int numero, String remetente, String tipo) {
        if (tipo.equals("Carta")) {
            return new Carta(numero, remetente, tipo);
        } else if (tipo.equals("Telegrama")) {
            return new Telegrama(numero, remetente, tipo);
        } else if (tipo.equals("Notificacao")) {
            return new Notificacao(numero, remetente, tipo);
        } else {
            return null;
        }
    }
}
