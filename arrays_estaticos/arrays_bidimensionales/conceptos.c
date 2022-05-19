#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("CONCEPTOS de  MATRICES\n\n");
	
	//Declaración
	int matriz[3][2];
	int matriz2[2][3] = {1,2,3,4,5,6};
	
	//Asignación
	matriz[1][2] = -3;
	
	//Recorrer la matriz
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			matriz2[i][j] = i+j;
		}
	}
	
	//Mostrar la matriz por pantalla
	/*
	printf("%d ", matriz2[0][0]);
	printf("%d ", matriz2[0][1]);
	printf("%d ", matriz2[0][2]);
	*/
	/*
	for (i=0; i<3; i++){
		printf("%d ", matriz2[0][i]);	
	}
	printf("\n");
	for (i=0; i<3; i++){
		printf("%d ", matriz2[i][1]);	
	}
	printf("\n");
	for (i=0; i<3; i++){
		printf("%d ", matriz2[i][2]);	
	}
	*/
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			printf("%d ", matriz2[i][j]);	
		}
		printf("\n");
	}
}