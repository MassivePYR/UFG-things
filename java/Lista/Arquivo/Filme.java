package Lista.Arquivo;

public class Filme {
    private int id;
    private String nome;
    private String genero;
    private int ano;
    private String autorPrincipal;
    static int idCount = 1;

    public Filme(String nome) {
        this.id = idCount++;
        this.nome = nome;
    }

    public void setFilmeFull(String genero, int ano, String autorPrincipal) {
        this.genero = genero;
        this.ano = ano;
        this.autorPrincipal = autorPrincipal;
    }

    public int getId() {
        return this.id;
    }

    public String getNome() {
        return this.nome;
    }

    public String getGenero() {
        return this.genero;
    }

    public int getAno() {
        return this.ano;
    }

    public String getAutorPrincipal() {
        return this.autorPrincipal;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setNome(String nome) {
        if (nome.length() > 0) {
            this.nome = nome;
        }
    }

    public void setGenero(String genero) {
        if (genero.length() > 0) {
            this.genero = genero;
        }
    }

    public void setAno(int ano) {
        if (ano > 0) {
            this.ano = ano;
        }
    }

    public void setAutorPrincipal(String autorPrincipal) {
        if (autorPrincipal.length() > 0) {
            this.autorPrincipal = autorPrincipal;
        }
    }

    public String toString() {
        return "Codigo: " + this.id + "\nNome: " + this.nome + "\nGenero: " + this.genero + "\nAno: " + this.ano
                + "\nAutor Principal: " + this.autorPrincipal + "\n";
    }
}
