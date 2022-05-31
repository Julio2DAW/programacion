package products;

public class Impresora extends Producto{

	private String tipo;
	
	public enum TipoImpresion{
		
		Inyeccion, Laser
	}
	
	public Impresora() {
		
		super(0f, true);
	}
	
	public Impresora(Float precio, String tipo) {
		
		super(precio, true);
		this.tipo = tipo;
	}
	
	@Override
	public String toString() {
		
		return "Impresora: " + TipoImpresion.Inyeccion + " -> " + this.getPrecioOferta();
	}
}