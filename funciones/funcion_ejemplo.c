#include <stdio.h>

/*
	Objetivos:
		- Declarar funciones
		- Llamar funciones
		- Programar funciones


//Declaracion de Función (métodos)

int funcion1(double param1, char param2){
	printf("Funcion 1\n");
	return 42;
}

void funcion2(){
	printf("Funcion 2\n");
}

int 
main(){
	
	//Lamar función
	funcion2();
	
	int respuesta = funcion1(3.0, 'z');
	printf("La función devuelve %d\n", funcion1(6.34, 'i'));
	return 0;
}
*/
int funcion_resul_area(int numLado, float tamLado, float apotema){
	float area = (numLado*tamLado*apotema)/2;
	return area;
}

main(){
	
	int numPruebas, numLado;
	float tamLado, apotema, area;
	
	printf("Numero de pruebas\n");
	scanf("%d", &numPruebas);
	
	while(numPruebas--){
		
		printf("Numero de lados del poligono regular\n");
		scanf("%d", &numLado),
		
		printf("Tamano del lado del poligono regular\n");
		scanf("%f", &tamLado),
		
		printf("Tamano de la apotema\n");
		scanf("%f", &apotema),
		
		area = funcion_resul_area(numLado, tamLado, apotema);
		
		printf("%f", area);
	}
}