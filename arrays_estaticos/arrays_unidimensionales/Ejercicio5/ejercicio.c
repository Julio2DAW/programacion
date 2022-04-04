#include <stdio.h>

	/*
		Se dispone de una tabla T de 15 números reales distintos de cero. Crear una nueva tabla en la que
		todos sus elementos resulten de dividir los elementos de la tabla T por el elemento T(K), siendo K
		un valor dado.
	*/
	
	//Variables Globales
		int t[15], t2[15], i, k;
		
main(){
	
	printf("\nArray con 15 elementos");
	printf("\nConseguir una tabla dividiendo k entre la otra\n");
	
	//Introducir números
	for ( i=0; i<=14; i++) {
		
		do {
			
			printf("Introducir el numero %d: ", i);
			scanf("%d", &t[i]);
		} while (t[i] == 0);
	}
	
	printf("\n");
	
	//Introducir posición k
	do {
			
		printf("Introduce K: ");
		scanf("%d", &k);
	} while(k<0 || k>=15);
	
	//Dividir datos t2[k]
	for (i=0; i<=14; i++) {
		
		t2[i]=t[i]/t[k];
	}
	
	//Visualizar t[15]
	printf("\n\nLa tabla de T:");
	for (i=0; i<=14; i++) {
		
		printf("\nt[%d] = %d", i, t[i]);
	}
	
	//Visualizar t2[15]
	printf("\n\nLa tabla de T2:");
	for (i=0; i<=14; i++) {
		
		printf("\nt2[%d] = %d", i, t2[i]);
	}
	
	return 0;
}
