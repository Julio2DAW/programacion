package arrays;

import java.util.Scanner;

public class ejercicio5 {

	public static void main(String[] args) {
		
		/*
			Se dispone de una tabla T de 15 n�meros reales distintos de cero. Crear una nueva tabla en la que
			todos sus elementos resulten de dividir los elementos de la tabla T por el elemento T(K), siendo K
			un valor dado.
		 */
		
		Scanner teclado = new Scanner(System.in);
		
		//Variables globales
		int t[] = new int [15];
		int t2[] = new int [15];
		int i, k;
		
		System.out.println("\nArray con 15 elementos");
		System.out.println("\nConseguir una tabla dividiendo k entre la otra\n");
		
		//Introducir datos
		System.out.println("Introducir datos\n");
		for (i=0; i<=14; i++) {
			
			do {
				
				System.out.println("Introducir t["+i+"]: ");
				t[i]=teclado.nextInt(); 
			} while (t[i] == 0);
		}
		
		System.out.println("\n");
		
		//Introducir posicion k
		System.out.println("\nIntroduce posicion de k\n");
		do {
			
			System.out.println("Introduce K: ");
			k=teclado.nextInt();
		} while(k<0 || k>=15);
		
		//Dividir datos t2[k]
		for (i=0; i<=14; i++) {
			
			t2[i]=t[i]/t[k];
		}
		
		//Visualizar t[15]
		System.out.println("\n\nLa tabla de T:");
		for (i=0; i<=14; i++) {
			
			System.out.println("t["+i+"] :"+t[i]);
		}
		
		//Visualizar t2[15]
		System.out.println("\n\nLa tabla de T2:");
		for (i=0; i<=14; i++) {
			
			System.out.println("t2["+i+"] :"+t2[i]);
		}
	}

}
