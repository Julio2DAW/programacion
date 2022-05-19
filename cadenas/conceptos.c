#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	printf("Manejo de Cadena de Texto\n\n");
	
	//Declaración
	char nombre[25]; //Son arrays de carecteres. Necesitamos el tamaño.
	
	//Asignación
	char lenguaje[30] = "Viva C"; //en el momento de la declaración.
	//nombre = "Dennis Ritchei"; //No puedo asignar con = después de la
	
	//Entrada y salida
	printf("El lenguaje es %s\n", lenguaje); //formateador es %s
	scanf("%s", nombre);
	printf("Tu nombre es %s\n", nombre);
	
	//Es un array
	printf("El caracter en la tercera posicion es %c.\n", nombre[2]);
	nombre[2] = 'Z';
	printf("Tu nombre es %s\n", nombre);
	
	//El carácter \0 señala el final del string
	nombre[2] = '\0';
	printf("Tu nombre es %s\n", nombre);
	
	//-------------------Usamos la librería---------------------------
	printf("Dime un texto: ");
	scanf("%s", nombre);
	
	//Saber la longitud de un string
	printf("Su longitud es %d.\n", strlen(nombre));
	
	//Copiar un string
	strcpy(lenguaje, "Don Quijote de La Mancha.");
	printf("lenguaje = \"%s\".\n", lenguaje);
	
	//Comparar textos
	char clave[10];
	printf("Dime la clave: ");
	scanf("%s", clave);
	
	//stricmp => mayúsculas y minúsculas
	if(strcmp(clave, "SECRETA")==0)
		printf("Has accedido.\n");
	else	
		printf("No eres legal.\n");
		
		
		
	return 0;
}