package Lista.Ex2;

public class CadastroMultiplo {

    public static void main(String[] args) {

        Cliente[] cliente = new Cliente[5];

        cliente[0] = new Cliente("Maria");
        cliente[0].setIdade(20);
        cliente[0].setTelefone("999-8791");

        cliente[1] = new Cliente("Joao");
        cliente[1].setIdade(18);
        cliente[1].setTelefone("951-8958");

        cliente[2] = new Cliente("Jose");
        cliente[2].setIdade(25);
        cliente[2].setTelefone("999-8457");

        cliente[3] = new Cliente("Ana");
        cliente[3].setIdade(30);
        cliente[3].setTelefone("986-8292");

        cliente[4] = new Cliente("Pedro");
        cliente[4].setIdade(40);
        cliente[4].setTelefone("994 8839");

        for (int i = 0; i < cliente.length; i++) {
            System.out.println(cliente[i].toString());
        }
    }
}
