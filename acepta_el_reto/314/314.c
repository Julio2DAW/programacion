#include <stdio.h>

main(){
	
	int numPruebas; //Total de pruebas a realizar
	int cantidadTemperaturas; //Total de temperaturas de la prueba
	int i, sw;
	int contadorValles, contadorPicos; //Contador de los picos de los valles
	
	//printf("Introduce numero de pruebas a realizar: ");
	scanf("%d", &numPruebas);
	
	while(numPruebas--){
		
		//printf("\nIntroduce cantidad de temperaturas de la prueba: ");
		scanf("%d", &cantidadTemperaturas);
		
		int temperaturas[cantidadTemperaturas]; //Temperaturas a introducir
		
		//Bucle para introducir temperaturas
		for(i=0; i<cantidadTemperaturas; i++){
			
			printf("\nTemperatura %d = ", i);
			scanf("%d", &temperaturas[i]);
		}
		
		//Contadores y Switch a 0
		contadorPicos = 0;
		contadorValles = 0;
		sw = 0;
		
		//Bucle para contar el total de picos y de valles
		for(i=1 ; i<cantidadTemperaturas -1; i++){
			
			//Comprobar si es valle y si lo es sw = 1, contadorValles +1
			if(temperaturas[i]>temperaturas[i+1] && temperaturas[i-1]<temperaturas[i]){
				
				sw = 1;
				contadorValles += 1;
			//Comprobar si es pico y si lo es sw = 0, contadorPicos +1	
			}else if(temperaturas[i]<temperaturas[i+1] && temperaturas[i-1]>temperaturas[i]){
				
				sw = 0;
				contadorPicos += 1;
			}
		}
		
		printf("\nEl total de picos son %d", contadorPicos);
		printf("\nEl total de valles son %d", contadorValles);
	}
	
	return 0;
}