package products;

public class Principal {

	public static void main(String[] args) {
		
		Ordenador ord1 = new Ordenador(500f, "Linux");
		Ordenador ord2 = new Ordenador(843.75f, "Windows");
		
		System.out.println(ord1);
		System.out.println(ord2);
	}
}
