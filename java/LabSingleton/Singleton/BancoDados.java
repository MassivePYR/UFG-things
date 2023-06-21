package Singleton;
public class BancoDados {
	
	private String nome;
	private int codigo;
    private static BancoDados instance = null;
	 
	 public BancoDados() {
	    codigo = 001;
	    nome = "MySql";
	 }

  public String toString() { 
     return "BancoDados : " + codigo + "-" + nome + " - Instância :" + this.hashCode() ; 
  }

  public static BancoDados getbancoDados() {
    if (instance == null) {
      instance = new BancoDados();
    }
    return instance;
  }
}
