package products;

public class Producto {

	private Float precio;
	private Boolean enOferta;
	
	/**
	 * Constructor con valores por defecto 
	 */
	public Producto() {
		
		precio = 0f;
		enOferta = true;
	}
	
	/**
	 * Constructor de la clase
	 * @param precio Precio de los productos en euros
	 * @param enOferta Producto en oferta
	 */
	public Producto(Float precio, Boolean enOferta) {
		
		this.precio = precio;
		this.enOferta = enOferta;
	}

	/**
	 * Calcula el precio del producto con un 21% IVA y un 15% de Oferta
	 * Precio con un 21% IVA y 15% de Oferta
	 * @return
	 */
	public Float getPrecioOferta() {
		
		return precio * 1.21f * 0.85f;
	}
	
	public Float getPrecio() {
		
		return precio;
	}

	public Boolean getEnOferta() {
		
		return enOferta;
	}
}