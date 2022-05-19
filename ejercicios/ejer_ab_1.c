#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	//Declaración
	int matriz[5][3];
	int i,j, suma;
	
	srand(time(NULL));
	
	//Introducir números aleatorios
	for(i=0; i<5; i++)
		for(j=0; j<3; j++)
			matriz[i][j] = rand() %10;
	
	//Mostrar por pantalla números aleatorios
	printf("NUMEROS ALEATORIOS\n");
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");	
	}
			
	//Mostrar por pantalla la suma de filas
	printf("\nSUMA de FILAS\n");
	for(i=0; i<5; i++){
		suma = 0;
		for(j=0; j<3; j++){
			printf("%d ", matriz[i][j]);
			suma = suma + matriz[i][j];	
		}
		printf("= %d\n", suma);	
	}
	
	
	
	//Mostrar por pantalla la suma de columnas
	printf("\nSUMA de COLUMNAS\n");
	for(i=0; i<3; i++){
		suma = 0;
		for(j=0; j<5; j++){
			printf("%d ", matriz[j][i]);
			suma = suma + matriz[j][i];
		}
		printf("= %d\n", suma);	
	}
}