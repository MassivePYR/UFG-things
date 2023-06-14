package ListaDeHeranca.Ex1;

import java.util.ArrayList;
import javax.swing.JOptionPane;

public class Principal {
  public static void main(String[] args) {
    // instanciar 10 funcionários sendo 2 horistas, 4 administradores, 3
    // comissionados e 1 gerente;
    // Armazenar os funcionários em um vetor;
    // Percorrer o vetor mostrando os dados dos funcionários e quanto cada um ganha
    // por mês.
    ArrayList<Funcionario> funcionarios = new ArrayList<Funcionario>();
    funcionarios.add(new Horista("João", "Silva", 1000.0, 160.0, 10.0));
    funcionarios.add(new Horista("Maria", "Silva", 1000.0, 160.0, 10.0));
    funcionarios.add(new Administrador("José", "Silva", 1000.0));
    funcionarios.add(new Administrador("Ana", "Silva", 1000.0));
    funcionarios.add(new Administrador("Pedro", "Silva", 1000.0));
    funcionarios.add(new Administrador("Paula", "Silva", 1000.0));
    funcionarios.add(new Comissionado("Carlos", "Silva", 1000.0, 100.0, 0.1));
    funcionarios.add(new Comissionado("Carla", "Silva", 1000.0, 100.0, 0.1));
    funcionarios.add(new Comissionado("Cristina", "Silva", 1000.0, 100.0, 0.1));
    funcionarios.add(new Gerente("Cristiano", "Silva", 1000.0, 0.1));

    for (Funcionario funcionario : funcionarios) {
      JOptionPane.showMessageDialog(null, funcionario.getNome() + " " + funcionario.getSobrenome() + " ganha "
          + funcionario.getSalario() + " por mês.");
    }
  }
}