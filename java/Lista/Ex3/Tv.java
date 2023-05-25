package Lista.Ex3;

public class Tv {
    private int canal;
    private int volume;

    public Tv() {
        this.canal = 0;
        this.volume = 0;
    }

    public void aumentarVolume() {
        if (this.volume < 100) {
            this.volume++;
        }
    }

    public void diminuirVolume() {
        if (this.volume > 0) {
            this.volume--;
        }
    }

    public void aumentarCanal() {
        if (this.canal < 100) {
            this.canal++;
        }
    }

    public void diminuirCanal() {
        if (this.canal > 0) {
            this.canal--;
        }
    }

    public void trocarCanal(int canal) {
        if (canal > 0 && canal < 100) {
            this.canal = canal;
        }
    }

    public String toString() {
        return "Canal: " + this.canal + " - Volume: " + this.volume;
    }
}
