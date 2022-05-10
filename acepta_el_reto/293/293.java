package aceptaElReto;

import java.util.Scanner;

public class aceptaReto293 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner teclado = new Scanner(System.in);
		//Variables
		int numCasos,
		insectos, //6 patas
		aracnidos, //8 patas
		crustaceos, //10 patas
		escolpendra,
		anillos_escolopendra, //2 patas x anillo
		resultado;
		
		System.out.println("Introduce numero de casos: ");
		numCasos = teclado.nextInt();
		
		for(; numCasos>0; numCasos--) {
			
			//Pido por teclado el número de insectos.
			System.out.println("\n\nIntroduce numero de insectos: ");
			insectos = teclado.nextInt();
			//Pido por teclado el número de aracnidos.
			System.out.println("Introduce numero de aracnidos: ");
			aracnidos = teclado.nextInt();
			//Pido por teclado el número de crustaceos.
			System.out.println("Introduce numero de crustaceos: ");
			crustaceos = teclado.nextInt();
			//Pido por teclado el número de escolopendras.
			System.out.println("Introduce numero de escolopendras: ");
			escolpendra = teclado.nextInt();
			//Pido por teclado el número de anillos de escolopendras.
			System.out.println("Introduce numero de anillos de escolopendras: ");
			anillos_escolopendra = teclado.nextInt();
			
			//Variable para guardar el resultado
			resultado = (insectos*6)+(aracnidos*8)+(crustaceos*10)+(escolpendra*anillos_escolopendra*2);
			//Imprimo por pantalla el resultado
			System.out.print("\nEste es el numero de patas en total: " + resultado);
		}
	}
}
