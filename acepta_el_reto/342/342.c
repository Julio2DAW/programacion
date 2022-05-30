#include <stdio.h>

int rondas; //Número de partidas
int ini; //Nº mínimo en el que se encuentra el nº a adivinar
int fin; //Nº máximo en el que se encuentra el nº a adivinar
int numAdivinar; //Nº a adivinar
int respuestas; //Nº máximo de respuestas para adivinar el nº
int respuesta; //Respuesta
int contadorRespuestas; // Contador de respuestas

main(){
	
	//Introducir información
	printf("Rondas a jugar: ");
	scanf("%d",&rondas);
	
	//Bucle para repetir las rondas tantas veces como se haya introducido por teclado.
	while(rondas--){
		
		//Introducir información
		printf("\nNum minimo en el que se encuentra el num a adivinar: ");
		scanf("%d",&ini);
		//Introducir información
		printf("\nNum maximo en el que se encuentra el num a adivinar: ");
		scanf("%d",&fin);
		//Introducir información
		printf("\nNum a adivinar: ");
		scanf("%d",&numAdivinar);
		//Introducir información
		printf("\nCantidad maxima de respuestas: ");
		scanf("%d",&respuestas);
		
		//Bucle para repetir las puestas tantas veces como se haya introducido por teclado mientras que sea
		//necesario.
		while(respuestas--){
			
			contadorRespuestas = 0; //Contador de respuestas a 0
			//Pedir información
			printf("\nNum?: ");
			scanf("%d",&respuesta);
			
			//En caso de que lo sepa muestra este mensaje
			if(numAdivinar == respuesta){
				
				printf("Lo sabe");
				break;
			}else{

				//En caso de no que lo sepa muestra estos mensajes en función del caso
				if(numAdivinar != respuesta && contadorRespuestas == respuestas){
					
					printf("No lo sabe");
				}else{

					if(numAdivinar<respuesta){
					
						printf("Es menor");
					}else{
			
						printf("Es mayor o igual");
					}
				}		
			}

			contadorRespuestas = contadorRespuestas+1; //Contador de respuestas aumentando en 1
		}
	}
}