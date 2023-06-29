package Imposto;
import java.io.*;
import java.util.ArrayList;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(new FileInputStream("funcionarios.txt")));
        String linha;
        ArrayList<Funcionario> funcionarios = new ArrayList<>();
        double totalImposto = 0, totalImpostoFeminino = 0, totalImpostoMasculino = 0;

        while (true) {
            linha = br.readLine();
            if (linha == null)
                break;
            String campos[] = linha.split("#");
            funcionarios.add(new Funcionario(campos[0], campos[1].charAt(0), Double.parseDouble(campos[2]),
                    Integer.parseInt(campos[3])));
        }
        System.out.println("-- Exibindo lista de funcionários: --");
        for (Funcionario f : funcionarios) {
            f.mostraFuncionario();
            System.out.println("\n");
            if(f.sexo == 'F'){
                totalImpostoFeminino += f.impostoRenda();
                totalImposto += f.impostoRenda();}
            else if(f.sexo == 'M'){
                totalImpostoMasculino += f.impostoRenda();
                totalImposto += f.impostoRenda();
            }
        }
        System.out.println("-- Exibindo total feminino de impostos: "+ totalImpostoFeminino);
        System.out.println("-- Exibindo total masculino de impostos: "+ totalImpostoMasculino);
        System.out.println("-- Exibindo total de impostos: "+ totalImposto);
        br.close();
    }
}