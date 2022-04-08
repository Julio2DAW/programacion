#include <stdio.h>

	struct fecha{
		
		int dd, mm,aa;
	};
	
	struct nombre{
		
		int nexp;
		struct fecha fecha_nac;
		int notas[3];
	};
	
	struct nombre alumnos[3];
	struct nombre aux;
	int i, j, sw;
	
main(){
	
	printf("\nIntroducir datos alumnos\n\n");
	
	for (i=0; i<=2; i++) {
		
		printf("Nº Exp alumnos[%d].nexp: ", i);
		scanf("%d", &alumnos[i].nexp);
		printf("Dia alumnos[%d].fecha_nac.dd: ", i);
		scanf("%d", &alumnos[i].fecha_nac.dd);
		printf("Dia alumnos[%d].fecha_nac.mm: ", i);
		scanf("%d", &alumnos[i].fecha_nac.mm);
		printf("Dia alumnos[%d].fecha_nac.aa: ", i);
		scanf("%d", &alumnos[i].fecha_nac.aa);
		
		for (j=0; j<=2; j++) {
			
			printf("Notas alumnos[%d].notas[%d]: ", i, j);
			scanf("%d", &alumnos[i].notas[j]);
		}
	}
	
	printf("\nVisualizar datos alumnos\n");
	
	for (i=0; i<=2; i++) {
		
		printf("\nalumnos[%d].nexp = %d", i, alumnos[i].nexp);
		printf("\nalumnos[%d].fecha_nac.dd = %d", i, alumnos[i].fecha_nac.dd);
		printf("\nalumnos[%d].fecha_nac.mm = %d", i, alumnos[i].fecha_nac.mm);
		printf("\nalumnos[%d].fecha_nac.aa = %d", i, alumnos[i].fecha_nac.aa);
		
		for (j=0; j<=2; j++) {
			
			printf("\nalumnos[%d].notas[%d] = %d", i, j, alumnos[i].notas[j]);
		}
	}
	
	printf("\nOrdenar con el método switch de mayor a menor por orden de expediente\n\n");
	
	sw = 0;
	while (sw==0){
		
		sw=1;
		
		for (i=0; i<=2; i++){
			
			if(alumnos[i].nexp < alumnos[i+1].nexp){
				
				aux=alumnos[i];
				alumnos[i]=alumnos[i+1];
				alumnos[i+1]=aux;
				
				sw=0;
			}
		}
	}
	
	printf("\nVisualizar alumnos ordenados\n");
	
	for (i=0; i<=2; i++) {
		
		printf("\nalumnos[%d].nexp = %d", i, alumnos[i].nexp);
		printf("\nalumnos[%d].fecha_nac.dd = %d", i, alumnos[i].fecha_nac.dd);
		printf("\nalumnos[%d].fecha_nac.mm = %d", i, alumnos[i].fecha_nac.mm);
		printf("\nalumnos[%d].fecha_nac.aa = %d", i, alumnos[i].fecha_nac.aa);
		
		for (j=0; j<=2; j++) {
			
			printf("\nalumnos[%d].notas[%d] = %d", i, j, alumnos[i].notas[j]);
		}
	}
	
	return 0;
}