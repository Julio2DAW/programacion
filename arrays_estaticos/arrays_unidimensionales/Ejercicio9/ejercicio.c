#include<stdio.h>
#define TOTAL 10

	/*
		Hacer un programa para entrar diez n�meros en una tabla y que despu�s los sume. No sumarlos a
		medida que se van entrando. Hacer dos bucles, un para entrar los elementos, y otro para sumarlos.
	*/
	
	//Variables Globales
		int t[TOTAL], i, s=0;

main(){
	
	printf("\nArray de 10 numeros");
	printf("\nSumar todos los numeros de la tabla\n");
	
	//Introducir t[10]
	for (i=0; i<TOTAL; i++) {
		
		printf("Introduce el numero %d: ", i);
		scanf("%d", &t[i]);			
	}
	
	//Sumarlos
	for (i=0; i<TOTAL; i++) {
		
		s+=t[i];
	}
	
	//Visualizar la suma
	printf("\nEl total de la suma es: %d", s);
	
	return 0;
}
