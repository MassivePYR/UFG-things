package Lista.Ex4;

public class Robo {
    private int id;
    private String status;
    private int posicaoX;
    private int posicaoY;
    private int quantidadeDePoAspirado;
    private int limiteDePo;
    static int cont = 1;

    public Robo(int limiteDePo) {
        this.id = cont;
        this.status = "Desligado";
        this.posicaoX = 0;
        this.posicaoY = 0;
        this.quantidadeDePoAspirado = 0;
        this.limiteDePo = limiteDePo;
        cont++;
    }

    public void ligar() {
        this.status = "Ligado";
        System.out.println("Robo " + this.id + " ligado.\n");
    }

    public void desligar() {
        this.status = "Desligado";
        System.out.println("Robo " + this.id + " desligado.\n");
    }

    public void aspirar(int po) {
        if (this.status != "Desligado") {
            System.out.println("Robo " + this.id + " aspirando..\n");
            if (this.quantidadeDePoAspirado + po > this.limiteDePo) {
                System.out.println("Limite de pó atingido.\n");
                System.out.println(
                        "Ainda Resta " + (po - (this.limiteDePo - this.quantidadeDePoAspirado)) + " de pó no chão.\n");
                this.quantidadeDePoAspirado = this.limiteDePo;
                this.status = "Cheio";
            } else {
                this.status = "Aspirando";
                this.quantidadeDePoAspirado += po;
            }

        }
    }

    public void andar(int x, int y) {
        if (this.status != "Desligado") {
            this.posicaoX = x;
            this.posicaoY = y;
            this.status = "Andando";
            System.out.println("Robo " + this.id + " andando..\n");
        } else {
            System.out.println("Robo " + this.id + " desligado, por favor ligue-o.\n");
        }
    }

    public void parar() {
        if (this.status != "Desligado") {
            this.status = "Parado";
        } else {
            System.out.println("Robo " + this.id + " desligado... Logo, ...está parado.\n");
        }
    }

    public void limpar() {
        if (this.status != "Ligado") {
            this.status = "Limpando";
            this.quantidadeDePoAspirado = 0;
            System.out.println("Robo " + this.id + " limpando..\n.");
            System.out.println(".\n");
            System.out.println("Robo " + this.id + " está limpo!\n");
        } else {
            System.out.println("Robo " + this.id + " está ligado, por favor desligue-o antes da limpeza.\n");
        }
    }

    public String toString() {
        return "Robo: " + this.id + "\nStatus: " + this.status + "\nPosicao X: " + this.posicaoX + "\nPosicao Y: "
                + this.posicaoY + "\nQuantidade de po aspirado: " + this.quantidadeDePoAspirado + "\nLimite de po: "
                + this.limiteDePo + "\n";
    }
}
