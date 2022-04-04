#include<stdio.h>

	/*
		Se dispone de una lista (vector) de 15 elementos. Se desea diseñar un algoritmo que permita
		insertar el valor x en el lugar k-ésimo de la mencionada lista.
	*/
	
	//Variables Globales
		int t[15], k, i, x;

main(){
	printf("\nArray con 15 numeros");
	printf("\nInsertar la posicion x en el valor k\n");
	
	//Introducir t[15]
	for (i=0; i<=14; i++) {
		
		printf("Introduce el numero %d: ", i);
		scanf("%d", &t[i]);
	}
	
	printf("\n");
	
	//Introducir k
	do {
		
		printf("Introduce K: ");
		scanf("%d", &k);
	} while(k<0 || k>=15);
	
	//Introducir x
	printf("Introduce X: ");
	scanf("%d", &x);
	
	//Introducir x en t[15]
	t[k]=x;
	
	//Visualizar t[15]
	printf("\nLa tabla de T:");
	
	for (i=0; i<=14; i++) {
		
		printf("\nt[%d] = %d", i, t[i]);
	}
	return 0;
}
