	#include <stdio.h>
	/*
		Entrar valores en un array de 4 x 4, e intercambiar filas por columnas.
	*/

	//Variables
	int t[4][4];
	int i,j,aux;

	//Funciones
	void introducir(void);
	void intercambiar(void);
	void visualizar(void);

main(){
	introducir();
	visualizar();
	intercambiar();
	visualizar();
	return 0;
}

void introducir(void){
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("t[%d][%d]: ",i,j);
			scanf("%d", &t[i][j]);
		}
	}
}

void intercambiar(void){
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			aux=t[i][j];
			t[i][j]=t[j][i];
			t[j][i]=aux;
		}
	}	
}

void visualizar(void){
	printf("\nLa matriz es:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t", t[i][j]);
		}
		printf("\n\n");
	}
}