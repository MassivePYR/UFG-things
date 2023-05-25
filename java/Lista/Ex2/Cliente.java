package Lista.Ex2;

public class Cliente {
    private String nome;
    private String telefone;
    private int idade;

    public Cliente(String nome) {
        this.nome = nome;
    }

    public String toString() {
        return "Cliente: " + nome + " - Telefone: " + telefone + " - Idade: " + idade;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }

    public String getTelefone() {
        return telefone;
    }
}
