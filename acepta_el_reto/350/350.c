#include <stdio.h>
main(){
	int numt; //Número de triángulos a formar
	float l1, l2, r; //Lado 1 y 2 del triángulo y resultado
	scanf("%d", &numt);
	while(numt--){
		scanf("%f", &l1);
		scanf("%f", &l2);
		r=l1*l2/2;
		printf("%f", r);
	}
}