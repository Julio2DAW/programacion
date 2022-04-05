#include <stdio.h>

	/*
		introducir array(10) entre 1 y 99
		visualizar
		ordenar > a < (burbuja)
		visualizar
		ordenar < a > (switch)
		visualizar
	*/
	
	//Variables globales
		int t[10], i, j, aux, sw;
		
	main(){
		
		printf("\nMetodos de Ordenacion\n");
		
		//Introducir numeros entre 1 y 99
		for (i=0; i<=9; i++) {
			
			do {
				
				printf("Introducir numero t[%d]: ", i);
				scanf("%d", &t[i]);
				
			} while (t[i]<1 || t[i]>99);
		}
		
		//Visualizar array no ordenada
		for (i=0; i<=9; i++) {
			
			printf("\nt[%d]= %d",i, t[i]);
		}
		
		//Ordenar por el método de la burbuja
		for (i=0; i<=8; i++) {
			
			for (j=0; j<=8-i; j++) {
				
				if (t[j]<t[j+1]) {
					
					aux = t[j];
					t[j] = t[j+1];
					t[j+1] = aux;
				}
			}
		}
		
		//Visualizar método de la burbuja
		printf("\n\nArray ordenado por el metodo de la burbuja\n");
		for (i=0; i<=9; i++) {
			
			printf("\nt[%d]= %d",i, t[i]);
		}
		
		//Ordenar por el método del switch
		sw=0;
		while (sw == 0) {
			
			sw = 1;
			
			for (i=0; i<=8; i++) {
				
				if (t[i]>t[i+1]) {
					
					aux = t[i];
					t[i] = t[i+1];
					t[i+1] = aux;
					sw=0;
				}
			}
			
		}
		
		//Visualizar método del switch
		printf("\n\nArray ordenado por el metodo del switch\n");
		for (i=0; i<=9; i++) {
			
			printf("\nt[%d]= %d",i, t[i]);
		}
	}
