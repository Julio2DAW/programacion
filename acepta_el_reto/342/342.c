#include <stdio.h>

int r,ini,fin,numAdivinar,c,dato;
main(){
	scanf("%d",&r);
	while(r--){
		scanf("%d",&ini);
		scanf("%d",&fin);
		scanf("%d",&numAdivinar);
		scanf("%d",&c);
		while(c--){
			scanf("%d",&dato);
			if(numAdivinar == dato){
				printf("Lo sabe");
				break;
			}else{
				if(numAdivinar<dato){
					printf("Es menor");
				}else{
					printf("Es mayor o igual");
				}
			}
		}
		printf("Hola mundo");
	}
}