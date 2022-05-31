package products;

public class Ordenador extends Producto{

	private String so;
	
	public Ordenador() {
		
		super(0f, true);
	}
	
	/**
	 * Constructor de la clase
	 * @param precio Precio de los productos en euros
	 * @param so Sistema Operativo del Ordenador
	 */
	public Ordenador(Float precio, String so) {
		
		super(precio, true);
		this.so = so;
	}

	@Override
	public String toString() {
		
		return "Ordenador: " + so + " -> " + this.getPrecioOferta();
	}
}