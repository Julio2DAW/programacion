package examena;

public class Coche extends Vehiculo{

	private String marca;
	
	public Coche() {
		super(0f,"Coche");
	}

	public Coche(Float precio, String marca) {
		super(precio, "Coche");
		this.marca = marca;
	}

	@Override
	public String toString() {
		return "Coche:" + marca + " -> " + this.getPrecioIVA();
	}
}
