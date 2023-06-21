package Singleton;
import java.util.ArrayList;

public class TestaSingletonBD {

	
	public static void main(String[] args) { 
		ArrayList<BancoDados> lista = new ArrayList<BancoDados>();
		for (int i = 0; i < 10; i++) {
			lista.add(BancoDados.getbancoDados());
		}
		for (BancoDados bd : lista) {
			System.out.println(bd);
		}
		
	} 
} 
