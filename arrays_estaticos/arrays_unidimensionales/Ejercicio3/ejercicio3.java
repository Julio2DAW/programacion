package arrays;

import java.util.Scanner;

public class ejercicio3 {

	public static void main(String[] args) {
		
		/*
			Escribir el algoritmo que permita contar el n�mero de elementos positivos y negativos de una tabla
			T [10].
		 */
		
		Scanner teclado = new Scanner(System.in);
		
		//Variables globales
		int t[] = new int [10];
		int i, cp, cn;
		
		System.out.println("\nArray con 10 elementos");
		System.out.println("\nContar numeros negativos y positivos\n");
		
		//Introducir numeros
		for ( i=0; i<=9; i++) {
			
			System.out.println("Introducir t["+i+"]: ");
			t[i]=teclado.nextInt();
		}
		
		System.out.println("\n");
		
		//Contar numeros positivos y negativos
		cp = 0;
		cn = 0;
		
		for ( i=0; i<=9; i++) {
			
			if (t[i] >= 0) {
				
				cp++;
			} else {
				
				cn++;
			}
		}
		
		//Visualizar datos
		System.out.print("\nCantidad de positivos = " + cp);
		System.out.print("\nCantidad de negarivos = " + cn);
	}

}
