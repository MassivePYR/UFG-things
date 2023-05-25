package Lista.Ex4;

import java.util.ArrayList;

public class Principal {

    // OBS: professora adicionei a função limpar pra poder continuar usando a função
    // aspirar sem precisar criar outro robo.

    public static void main(String[] args) {
        ArrayList<Robo> robos = new ArrayList<Robo>();
        robos.add(new Robo(10));
        robos.add(new Robo(20));

        robos.get(0).andar(10, 10);
        robos.get(0).ligar();
        System.out.println(robos.get(0));
        robos.get(0).aspirar(11);
        System.out.println(robos.get(0));
        robos.get(0).andar(10, 10);
        System.out.println(robos.get(0));
        robos.get(0).parar();
        System.out.println(robos.get(0));
        robos.get(0).desligar();
        System.out.println(robos.get(0));

        robos.get(1).ligar();
        System.out.println(robos.get(1));
        robos.get(1).aspirar(20);
        System.out.println(robos.get(1));
        robos.get(1).andar(20, 20);
        System.out.println(robos.get(1));
        robos.get(1).parar();
        System.out.println(robos.get(1));
        robos.get(1).desligar();
        System.out.println(robos.get(1));

        for (Robo robo : robos) {
            System.out.println(robo);
        }

        robos.get(0).limpar();
        robos.get(1).limpar();

    }
}
