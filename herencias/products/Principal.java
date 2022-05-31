package products;

public class Principal {

	public static void main(String[] args) {
		
		Ordenador ord1 = new Ordenador(500f, "Linux");
		Ordenador ord2 = new Ordenador(843.75f, "Windows");
		
		Impresora imp1 = new Impresora(400f, "Inyección");
		Impresora imp2 = new Impresora(240f, "Láser");
		
		System.out.println(ord1);
		System.out.println(ord2);
		
		System.out.println(imp1);
		System.out.println(imp2);
	}
}
