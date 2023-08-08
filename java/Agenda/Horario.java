package Agenda;

public class Horario {
    private int hora;
    private int min;

    public Horario(int hora, int min) {
        this.hora = hora;
        this.min = min;
    }

    public String toString() {
        return this.hora + ":" + this.min;
    }

    public void marcarConsulta(Cliente cliente) {
        System.out.println("Consulta marcada para " + this.toString() + " com " + cliente.toString());
    }

}
