#include<stdio.h>
#define TOTAL 10

	/*
		Hacer un programa que gire los elementos de una tabla de modo que el primero se intercambia con
		el último, el segundo con el penúltimo,...
	*/
	
	//Variables Globales
		int t[TOTAL], i, aux;

main(){
	
	printf("\nArray de 10 numeros");
	printf("\nIntercambiar todos los numeros de una tabla\n");
	
	//Introducir Array
	for (i=0; i<TOTAL; i++) {
		
		printf("Introducir t[%d]: ", i);
		scanf("%d", &t[i]);
	}
	
	//Intercambio
	for (i=0; i<TOTAL/2; i++) {
		
		aux=t[i];
		t[i]=t[TOTAL-1-i];
		t[TOTAL-1-i]=aux;	
	}
		
	//Visualizar
	for (i=0; i<TOTAL; i++) {
		
		printf("\nt[%d]= %d", i, t[i]);
	}
	
	return 0;
}
