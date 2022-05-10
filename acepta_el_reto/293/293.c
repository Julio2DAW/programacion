#include <stdio.h>

	//Variables.
	int numCasos,
		insectos, //6 patas
		aracnidos, //8 patas
		crustaceos, //10 patas
		escolpendra,
		anillos_escolopendra, //2 patas x anillo
		resultado;
		
	main(){
		
		//Pido por teclado el número de casos.
		printf("Introduce numero de casos: ");
		scanf("%d", &numCasos);
		
		for(; numCasos>0; numCasos--) {
			
			//Pido por teclado el número de insectos.
			printf("\n\nIntroduce numero de insectos: ");
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
			
			//Variable para guardar el resultado
			resultado = (insectos*6)+(aracnidos*8)+(crustaceos*10)+(escolpendra*anillos_escolopendra*2);
			//Imprimo por pantalla el resultado
			printf("Este es el numero de patas en total: %d", resultado);
		}
		
		return 0;
	}