import java.util.ArrayList;
import javax.swing.JOptionPane;

public class Musica {
    private String nome;
    private int ano;
    private String tipo;
    private Compositor Compositor;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public Musica(String nome, int ano, String tipo, Compositor Compositor) {
        this.nome = nome;
        this.ano = ano;
        this.tipo = tipo;
        this.Compositor = Compositor;
    }

    public String toString() {
        return "Nome: " + this.nome + "\nAno: " + this.ano + "\nTipo: " + this.tipo + "\nCompositor: "
                + this.Compositor.getCompNome() + "\n";
    }

    public static void main(String[] args) {
        ArrayList<Musica> musicas = new ArrayList<Musica>();

        Compositor compositor = new Compositor("Mozart", "Austríaco");
        Musica musica = new Musica("Ave Maria", 1782, "Clássica", compositor);
        musicas.add(musica);

        compositor = new Compositor("Ludwig van Beethoven", "Alemão");
        musica = new Musica("Ode à Alegria", 1824, "Clássica", compositor);
        musicas.add(musica);

        compositor = new Compositor("Johann Sebastian Bach", "Alemão");
        musica = new Musica("Tocata e Fuga em Ré Menor", 1704, "Clássica", compositor);
        musicas.add(musica);

        compositor = new Compositor("Wolfgang Amadeus Mozart", "Austríaco");
        musica = new Musica("Sinfonia nº 40", 1788, "Clássica", compositor);
        musicas.add(musica);

        for (Musica m : musicas) {
            JOptionPane.showMessageDialog(null, m);
        }

        System.out.println("\n" + musicas.get(0));
        System.out.println("\n" + musicas.get(1));
        System.out.println("\n" + musicas.get(2));
        System.out.println("\n" + musicas.get(3));

    }
}