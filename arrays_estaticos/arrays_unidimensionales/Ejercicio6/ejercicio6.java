package arrays;

import java.util.Scanner;

public class ejercicio6 {

	public static void main(String[] args) {
		
		/*
			Se dispone de una lista (vector) de 15 elementos. Se desea dise�ar un algoritmo que permita
			insertar el valor x en el lugar k-�simo de la mencionada lista.
		 */
	
		Scanner teclado = new Scanner(System.in);
		
		//Variables Globales
		int t[] = new int [15];
		int k, i, x;

		System.out.println("\nArray con 15 numeros");
		System.out.println("\nInsertar la posicion x en el valor k\n");
		
		//Introducir datos
		System.out.println("Introducir datos\n");
		for (i=0; i<=14; i++) {
			
			System.out.println("Introducir t["+i+"]: ");
			t[i]=teclado.nextInt(); 
		}
		
		//Introducir k
		do {
			
			System.out.println("Introduce K: ");
			k=teclado.nextInt();
		} while(k<0 || k>=15);
		
		//Introducir x en t[15]
		x=0;
		t[k]=x;
		
		//Visualizar t[15]
		System.out.println("\n\nLa tabla de T:");
		
		for (i=0; i<=14; i++) {
			
			System.out.println("t["+i+"] :"+t[i]);
		}
	}

}
