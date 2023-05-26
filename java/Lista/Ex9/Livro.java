package Lista.Ex9;

class Livro {
    private String titulo;
    private int codigo;
    private Pessoa autor;
    private String editora;
    private String edicao;
    private int ano;
    private String local;
    private String genero;
    private static int contador = 1;

    public Livro(String titulo, Pessoa autor, String editora, String edicao, int ano, String local,
            String genero) {
        this.titulo = titulo;
        this.codigo = contador++;
        this.autor = autor;
        this.editora = editora;
        this.edicao = edicao;
        this.ano = ano;
        this.local = local;
        this.genero = genero;
    }

    public String obterReferencia() {
        String autorFormatado = autor.obterNomeFormatado();
        return "Código: " + this.codigo + "\n" +
                "Título: " + getTitulo() + "\n" +
                "Gênero: " + this.genero + "\n" +
                "Referência: " + autorFormatado + ".\n" + getTitulo() + ".       " + edicao + ". " + local + ": "
                + editora
                + ", "
                + ano + ".";
    }

    public String getTitulo() {
        return titulo;
    }

    public int getCodigo() {
        return codigo;
    }

    public Pessoa getAutor() {
        return autor;
    }

    public String getEditora() {
        return editora;
    }

    public String getEdicao() {
        return edicao;
    }

    public int getAno() {
        return ano;
    }

    public String getLocal() {
        return local;
    }

    public String getGenero() {
        return genero;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public void setAutor(Pessoa autor) {
        this.autor = autor;
    }

    public void setEditora(String editora) {
        this.editora = editora;
    }

    public void setEdicao(String edicao) {
        this.edicao = edicao;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public void setLocal(String local) {
        this.local = local;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

}