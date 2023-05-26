package Lista.Ex10;

public class Morador {
    private String nome;
    private String CPF;
    private String celular;
    private String dataDeNascimento;
    private String sexo;
    private String bloco;
    private String apartamento;
    private String codigodeAcesso;
    private int codigosequencial;
    private static int contador = 1;

    public Morador(String Nome, String CPF, String Celular, String DatadeNascimento, String Sexo, String bloco,
            String apartamento, String codigodeAcesso) {
        this.nome = Nome;
        this.CPF = CPF;
        this.celular = Celular;
        this.dataDeNascimento = DatadeNascimento;
        this.sexo = Sexo;
        this.bloco = bloco;
        this.apartamento = apartamento;
        this.codigodeAcesso = codigodeAcesso;
        this.codigosequencial = contador++;
    }

    public String getNome() {
        return this.nome;
    }

    public String getCPF() {
        return String.format("%s.%s.%s-%s", this.CPF.substring(0, 3), this.CPF.substring(3, 6),
                this.CPF.substring(6, 9), this.CPF.substring(9, 11));
    }

    public String getCelular() {
        return String.format("(%s) %s-%s", this.celular.substring(0, 2), this.celular.substring(2, 7),
                this.celular.substring(7, 11));
    }

    public String getDatadeNascimento() {
        return String.format("%s/%s/%s", this.dataDeNascimento.substring(0, 2), this.dataDeNascimento.substring(2, 4),
                this.dataDeNascimento.substring(4, 8));
    }

    public String getSexo() {
        return this.sexo;
    }

    public String getBloco() {
        return this.bloco;
    }

    public String getApartamento() {
        return this.apartamento;
    }

    public String getCodigodeAcesso() {
        return this.codigodeAcesso;
    }

    public int getCodigosequencial() {
        return this.codigosequencial;
    }

    public void setNome(String Nome) {
        this.nome = Nome;
    }

    public void setCPF(String CPF) {
        this.CPF = CPF;
    }

    public void setCelular(String Celular) {
        this.celular = Celular;
    }

    public void setDataDeNascimento(String dataDeNascimento) {
        this.dataDeNascimento = dataDeNascimento;
    }

    public void setSexo(String Sexo) {
        this.sexo = Sexo;
    }

    public void setBloco(String bloco) {
        this.bloco = bloco;
    }

    public void setApartamento(String apartamento) {
        this.apartamento = apartamento;
    }

    public void setCodigodeAcesso(String codigodeAcesso) {
        this.codigodeAcesso = codigodeAcesso;
    }

    public void setCodigosequencial(int codigosequencial) {
        this.codigosequencial = codigosequencial;
    }

    public void mostrarDados() {
        System.out.println("Nome: " + nome);
        System.out.println("CPF: " + String.format("%s.%s.%s-%s", CPF.substring(0, 3), CPF.substring(3, 6),
                CPF.substring(6, 9), CPF.substring(9, 11)));
        System.out.println("Celular: " + String.format("(%s) %s-%s", celular.substring(0, 2), celular.substring(2, 7),
                celular.substring(7, 11)));
        System.out.println("Data de Nascimento: " + String.format("%s/%s/%s", dataDeNascimento.substring(0, 2),
                dataDeNascimento.substring(2, 4), dataDeNascimento.substring(4, 8)));
        System.out.println("Sexo: " + sexo);
        System.out.println("Bloco: " + bloco);
        System.out.println("Apartamento: " + apartamento);
        System.out.println("Código de Acesso: " + codigodeAcesso);
        System.out.println("Código Sequencial: " + codigosequencial);
    }
}
