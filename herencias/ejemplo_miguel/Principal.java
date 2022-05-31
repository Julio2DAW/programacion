package examena;

public class Principal {

	public static void main(String[] args) {
		
		Coche c1 = new Coche();
		Coche c2 = new Coche(12000f, "Renault");
		
		System.out.println(c1);
		System.out.println(c2);
	}
}