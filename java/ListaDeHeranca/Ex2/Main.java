package ListaDeHeranca.Ex2;

public class Main {
    public static void main(String[] args) {
        LojaConcreta matriz = new LojaConcreta(1, "123.456.789-71", "Loja Matriz", "Rua Principal, 123", "João");
        LojaConcreta filial1 = new LojaConcreta(2, "987.654.321-69", "Loja Filial 1", "Avenida Secundária, 456",
                "Maria");
        LojaConcreta filial2 = new LojaConcreta(3, "543.216.789-21", "Loja Filial 2", "Rua Alternativa, 789", "Pedro");

        matriz.mostrarDadosLoja();
        filial1.mostrarDadosLoja();
        filial2.mostrarDadosLoja();

        matriz.registra_abertura_dia();
        matriz.registra_abertura_dia();
        filial1.registra_abertura_dia();

        matriz.mostrarDadosLoja();
        filial1.mostrarDadosLoja();

        filial1.registra_fechamento_dia();
        filial2.registra_abertura_dia();

        filial1.mostrarDadosLoja();
        filial2.mostrarDadosLoja();

    }
}