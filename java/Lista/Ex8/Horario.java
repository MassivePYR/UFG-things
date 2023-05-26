package Lista.Ex8;

public class Horario {
    private int hora;
    private int minuto;
    private int segundo;

    public Horario(int hora) {
        this.hora = hora;
        this.minuto = 0;
        this.segundo = 0;

        while (this.hora > 23) { // validação de hora
            this.hora -= 24;
        }

        if (this.hora < 0) {
            this.hora = 0;
        }
    }

    public Horario(int hora, int minuto, int segundo) {
        this.hora = hora;
        this.minuto = minuto;
        this.segundo = segundo;
        while (this.hora > 23 || this.minuto > 59 || this.segundo > 59) { // validação de horário

            while (this.hora > 23) {
                this.hora -= 24;
            }

            if (this.hora < 0) {
                this.hora = 0;
            }

            while (this.minuto > 59) {
                this.minuto -= 60;
                this.hora++;
            }

            if (this.minuto < 0) {
                this.minuto = 0;
            }

            while (this.segundo > 59) {
                this.segundo -= 60;
                this.minuto++;
            }

            if (this.segundo < 0) {
                this.segundo = 0;
            }
        }
    }

    public Horario(Horario relogioAgora) {
        this.hora = relogioAgora.hora;
        this.minuto = relogioAgora.minuto;
        this.segundo = relogioAgora.segundo;
    }

    public void setHora(int hora) {
        this.hora = hora;

        if (this.hora < 0 || this.hora > 23) {
            System.out.println("Hora inválida");
            System.out.println("As Horas serão mantidas com o valor anterior\n");
        }
    }

    public void setMinuto(int minuto) {
        this.minuto = minuto;

        if (this.minuto < 0 || this.minuto > 59) {
            System.out.println("Minuto inválido");
            System.out.println("Os Minutos serão mantidos com o valor anterior\n");
        }
    }

    public void setSegundo(int segundo) {
        this.segundo = segundo;

        if (this.segundo < 0 || this.segundo > 59) {
            System.out.println("Segundo inválido\n");
            System.out.println("Os Segundos serão mantidos com o valor anterior\n");
        }
    }

    public int getHora() {
        return this.hora;
    }

    public int getMinuto() {
        return this.minuto;
    }

    public int getSegundo() {
        return this.segundo;
    }

    public void mostrarHorario() {
        System.out.printf("%02d:%02d:%02d\n", this.hora, this.minuto, this.segundo);
    }

    public String toString() {
        return this.hora + ":" + this.minuto + ":" + this.segundo;
    }

    // ---------------------------------------------------------------------------------------

    public void atualizarHorario(int hora2, int minuto2, int segundo2) {
        while (hora2 > 23 || minuto2 > 59 || segundo2 > 59) {
            while (hora2 > 23) {
                hora2 -= 24;
            }

            if (hora2 < 0) {
                System.out.println("Hora inválida");
                System.out.println("As Horas serão zeradas\n");
                hora2 = 0;
            }

            while (minuto2 > 59) {
                minuto2 -= 60;
                hora2++;
            }

            if (minuto2 < 0) {
                System.out.println("Minuto inválido");
                System.out.println("Os Minutos serão zerados\n");
                minuto2 = 0;
            }

            while (segundo2 > 59) {
                segundo2 -= 60;
                minuto2++;
            }

            if (segundo2 < 0) {
                System.out.println("Segundo inválido");
                System.out.println("Os Segundos serão zerados\n");
                segundo2 = 0;
            }
        }

        this.hora = hora2;
        this.minuto = minuto2;
        this.segundo = segundo2;
    }

    public void atualizarHora(int hora2) {
        while (hora2 > 23) {
            hora2 -= 24;
        }
        if (hora2 < 0) {
            System.out.println("Hora inválida");
            System.out.println("As Horas não serão atualizadas\n");
        } else {
            this.hora = hora2;
        }
    }

    public void atualizarMinuto(int minuto2) {
        while (minuto2 > 59) {
            minuto2 -= 60;
            this.hora++;
        }
        if (minuto2 < 0) {
            System.out.println("Minuto inválido");
            System.out.println("Os Minutos não serão atualizados\n");
        } else {
            this.minuto = minuto2;
        }
    }

    public void atualizarSegundo(int segundo2) {
        while (segundo2 > 59) {
            segundo2 -= 60;
            this.minuto++;
        }
        if (segundo2 < 0) {
            System.out.println("Segundo inválido");
            System.out.println("Os Segundos não serão atualizados\n");
        } else {
            this.segundo = segundo2;
        }
    }

    public void atualizarHorario(Horario relogioAgora) {
        this.hora = relogioAgora.hora;
        this.minuto = relogioAgora.minuto;
        this.segundo = relogioAgora.segundo;
    }

}