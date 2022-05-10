#include <stdio.h>

	//Variables.
	int numCasos,
		insectos,
		aracnidos,
		crustaceos,
		escolpendra,
		anillos_escolopendra,
		resultado,
		i;
		
	main(){
		
		//Pido por teclado el número de casos.
		printf("Introduce numero de casos: ");
		scanf("%d", &numCasos);
		
		for(i>0; i=numCasos; i++) {
			
			//Pido por teclado el número de insectos.
			printf("Introduce numero de insectos: ");
			scanf("%d", &insectos);
			//Pido por teclado el número de aracnidos.
			printf("Introduce numero de aracnidos: ");
			scanf("%d", &aracnidos);
			//Pido por teclado el número de crustaceos.
			printf("Introduce numero de crustaceos: ");
			scanf("%d", &crustaceos);
			//Pido por teclado el número de escolopendras.
			printf("Introduce numero de escolopendras: ");
			scanf("%d", &escolpendra);
			//Pido por teclado el número de anillos de escolopendras.
			printf("Introduce numero de anillos de escolopendras: ");
			scanf("%d", &anillos_escolopendra);
			
			resultado = insectos*6;
			printf("Este es el numero de patas en total: %d", resultado);
			return resultado;
		}
	}