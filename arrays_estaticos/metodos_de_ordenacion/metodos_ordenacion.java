package arrays;

import java.util.Iterator;
import java.util.Scanner;

public class metodos_ordenacion {

	public static void main(String[] args) {
		
		/*
			introducir array(10) entre 1 y 99
			visualizar
			ordenar > a < (burbuja)
			visualizar
			ordenar < a > (switch)
			visualizar
		 */
	
		Scanner teclado = new Scanner(System.in);
		
		//Variables globales
		int t[] = new int [10];
		int i, j, aux, sw;
		
		System.out.println("\nMetodos de Ordenacion\n");

		//Introducir numeros entre 1 y 99
		System.out.println("Introducir datos en la tabla entre 1 y 99\n");
		for (i=0; i<=9; i++) {
			
			do {
				
				System.out.println("Introducir t["+i+"]: ");
				t[i]=teclado.nextInt(); 
			} while (t[i]<1 || t[i]>99);
		}
		
		//Visualizar array no ordenada
		System.out.println("\nVisualizar datos no ordenados de la tabla\n");
		for (i=0; i<=9; i++) {
			
			System.out.println("t["+i+"] :"+t[i]);
		}
		
		//Ordenar por el metodo de la burbuja
		for (i=0; i<=8; i++) {
			
			for (j=0; j<=8-i; j++) {
				
				if (t[j]<t[j+1]) {
					
					aux = t[j];
					t[j] = t[j+1];
					t[j+1] = aux;
				}
			}
		}
		
		//Visualizar metodo de la burbuja
		System.out.println("\n\nArray ordenado por el metodo de la burbuja\n");
		for (i=0; i<=9; i++) {
			
			System.out.println("t["+i+"] :"+t[i]);
		}
		
		//Ordenar por el metodo del switch
		sw=0;
		while (sw == 0) {
			
			sw = 1;
			
			for (i=0; i<=8; i++) {
				
				if (t[i]>t[i+1]) {
					
					aux = t[i];
					t[i] = t[i+1];
					t[i+1] = aux;
					sw=0;
				}
			}
			
		}
		
		//Visualizar metodo del switch
		System.out.println("\n\nArray ordenado por el metodo del switch\n");
		for (i=0; i<=9; i++) {
			
			System.out.println("t["+i+"] :"+t[i]);
		}
	}

}
