#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
		
	//Variables
	char c[50];
	int i, j, sw;
	
	//Introducir palabra
	printf("\nIntroduce palabra: ");
	scanf("%c", &c[50]);
	
	for(i=strlen(c)-1, j=0; c[i]==c[j] && j<=i; i--, j++){
		if(j>i) sw=1;
		else sw=0;
	}
	
	if(sw==1) printf("\nNo es palindromo.");
	else printf("\nEs palindromo.");
}