#include <stdio.h>

	/*
		Escribir el algoritmo que permita contar el número de elementos positivos y negativos de una tabla
		T [10].
	*/
	
	//Variables Globales
		int t[10], i, cp, cn;
		
main(){
	
	printf("\nArray con 10 elementos");
	printf("\nContar números negativos y positivos\n");
	
	//Introducir números
	for ( i=0; i<=9; i++) {
		
		printf("Introducir el numero %d: ", i);
		scanf("%d", &t[i]);
	}
	
	printf("\n");
	
	//Contar números positivos y negativos
	cp = 0;
	cn = 0;
	
	for ( i=0; i<=9; i++) {
		
		if (t[i] >= 0) {
			
			cp++;
		} else {
			
			cn++;
		}
	}
	
	//Visualizar datos
	printf("\nEl total de positivos es: %d ", cp);
	printf("\nEl total de negativos es: %d ", cn);
	
	return 0;
}
