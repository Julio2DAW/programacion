#include<stdio.h>
#define TOTAL 10
	
	/*
		Hacer un programa que encuentre el elemento más grande, y el más pequeño de un array, y
		después los intercambie por los que ocupan la primera y la última posición.
	*/
	
	//Variables Globales
		int t[TOTAL], i, aux, ma, me, posMa, posMe;

main(){
	
	printf("\nArray de 10 numeros");
	printf("\nEncotrar el numero mayor y menor de una tabla e intercambiarlos por el primero y por el ultimo\n");
	
	//Introducir Array
	for (i=0; i<TOTAL; i++) {
		
		printf("Introducir t[%d]: ", i);
		scanf("%d", &t[i]);
	}
	
	//Encontrar el mayor
	ma = t[0];
	posMa = 0;
	
	for (i=0; i<TOTAL; i++) {
		
		if(t[i]>ma){
			
			ma=t[i];
			posMa=i;
		}			
	}
	
	//Encontrar el menor
	me = t[0];
	posMe = 0;
	
	for (i=0; i<TOTAL; i++) {
		
		if(t[i]<me){
			
			me=t[i];
			posMe=i;
		}			
	}
	
	//Intercambio mayor
	aux=t[TOTAL-1];
	t[TOTAL-1]=t[posMa];
	t[posMa]=aux;
	
	//Intercambio menor
	aux=t[0];
	t[0]=t[posMe];
	t[posMe]=aux;
			
	//Visualizar
	for (i=0; i<TOTAL; i++) {
		
		printf("\nt[%d]= %d", i, t[i]);
	}
	
	return 0;
}

