package Lista.Ex9;

class Pessoa {
    private String nome;
    private String sobrenome;
    private String nomeIntermediario;

    public Pessoa(String nome, String sobrenome, String nomeIntermediario) {
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.nomeIntermediario = nomeIntermediario;
    }

    public String obterNomeFormatado() {
        return sobrenome.toUpperCase() + ", " + nome.charAt(0) + ". " + nomeIntermediario.charAt(0) + ".";
    }

    public String getNome() {
        return this.nome;
    }

    public String getSobrenome() {
        return this.sobrenome;
    }

    public String getNomeIntermediario() {
        return this.nomeIntermediario;
    }
}