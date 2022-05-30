#include <stdio.h>

int rondas; //Rondas a jugar
int numPiezas; //Numero de piezas del puzzle

main(){
	
	//Pedir datos
	printf("Numero de rondas a jugar: ");
	scanf("%d", &rondas);
	
	//Bucle para repetir las rondas tantas veces como se haya introducido por teclado.
	while(rondas--){
		
		//Pedir datos
		printf("\nNumero de piezas: ");
		scanf("%d", &numPiezas);
		int i;
		int arrayPiezas[numPiezas]; //Array para introducir piezas
		
		
		//Array para introducir piezas
		for(i=0; i<numPiezas-1; i++){
			
			printf("Introduce pieza %d: ", i+1);
			scanf("%d", &arrayPiezas[i]);
		}
		
		int sw, aux; //sw para método de ordenación y variable auxiliar
		sw = 0;
		
		//Ordenar las piezas
		while (sw == 0) {
			
			sw = 1;
			for (i=0; i<=numPiezas-1; i++) {
				
				if (arrayPiezas[i]>arrayPiezas[i+1]) {
					
					aux = arrayPiezas[i];
					arrayPiezas[i] = arrayPiezas[i+1];
					arrayPiezas[i+1] = aux;
					sw=0;
				}
			}	
		}
		
		//Mostrar la pieza que falta
		for(i=0; i<numPiezas; i++){
			
			if(arrayPiezas[numPiezas] != numPiezas){
				
				printf("%d\n", i);
				break;
			}
		}
	}
}