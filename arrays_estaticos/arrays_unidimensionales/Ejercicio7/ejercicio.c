#include<stdio.h>

	/*
		Se dispone de una lista de 10 números enteros. Calcular su valor máximo y el orden que ocupan en
		la tabla.
	*/
	
	//Variables Globales
		int t[10], i, m=0, p=0;

main(){
	
	printf("\nArray de 10 numeros");
	printf("\nIndicar el elemento mayor y su posicion\n");
	
	//Introducir t[10]
	for (i=0; i<=9; i++) {
		
		printf("Introduce el numero %d: ", i);
		scanf("%d", &t[i]);
	}
	
	//Encontrar el numero mayor
	for (i=0; i<=9; i++) {
		
		if(t[i]>m) {
			
			m=t[i];
			p=i;
		}	
	}
	
	//Visualizar el numero y su posición
	printf("El numero mayor es: t[%d] = %d", p, t[p]);
	
	return 0;
}
