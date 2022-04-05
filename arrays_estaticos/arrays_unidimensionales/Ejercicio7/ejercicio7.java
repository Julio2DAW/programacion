package arrays;

import java.util.Scanner;

public class ejercicio7 {

	public static void main(String[] args) {
		/*
			Se dispone de una lista de 10 numeros enteros. Calcular su valor maximo y el orden que ocupan en
			la tabla.
		*/
		
		Scanner teclado = new Scanner(System.in);
		
		//Variables Globales
		int t[] = new int [10];
		int i, m, p;
		
		System.out.println("\nArray de 10 numeros");
		System.out.println("\nIndicar el elemento mayor y su posicion\n");
		
		//Introducir datos
		System.out.println("Introducir datos\n");
		for (i=0; i<=9; i++) {
			
			System.out.println("Introducir t["+i+"]: ");
			t[i]=teclado.nextInt(); 
		}
		
		//Encontrar el numero mayor
		m=t[0];
		p=0;
		
		for (i=0; i<=9; i++) {
			
			if(t[i]>m) {
				
				m=t[i];
				p=i;
			}	
		}
		
		//Visualizar datos
		System.out.print("\nEl numero mayor es: " + t[p] + " y su posicion es: " + p);
	}

}
