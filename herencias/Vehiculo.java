package examena;

public class Vehiculo {

	private Float precio;
	private String nombre;
	
	public Vehiculo() {
		precio = 0f;
		nombre = "";
	}
	
	/**
	 * Constructor de la clase
	 * @param precio Precio del vehículo en euros
	 * @param nombre Nombre del vehículo
	 */
	public Vehiculo(Float precio, String nombre) {
		this.nombre = nombre;
		this.precio = precio;
	}
	
	/**
	 * Calcula el ptrecio con IVA
	 * Precio con un 21% de IVA
	 * @return
	 */
	public Float getPrecioIVA() {
		return precio * 1.21f;
	}

	public Float getPrecio() {
		return precio;
	}

	public String getNombre() {
		return nombre;
	}
}