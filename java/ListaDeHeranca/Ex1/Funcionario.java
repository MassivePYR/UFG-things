package ListaDeHeranca.Ex1;

public class Funcionario {
        private String nome;
        private String sobrenome;

        public Funcionario(String nome, String sobrenome) {
            this.nome = nome;
            this.sobrenome = sobrenome;
        }
        public void setNome(String nome) {
             this.nome = nome;
        }
        public void setSobrenome(String sobrenome) {
             this.sobrenome = sobrenome;
        }
        public String getNome() {
             return this.nome;
        }
        public String getSobrenome() {
             return this.sobrenome;
        }
        public String toString() {
            return "Nome: " + this.nome + "\nSobrenome: " + this.sobrenome;
        }
        public String getSalario() {
            return this.getSalario();
        }
}
