#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

    void promedios();
	void Lectura_datos_alu();
	void Lectura_datos_alu_nuev();
	void imprime_datos();
	void asignar_cal_exa();
	void impre_datos_alu_();
    int preguntas();
    int puntos;
    char pregunta_armada[6];
    char textos[5]=".txt";
    char nombre_a[30];
	char num_cuen[9]; 

int main(){
    int i_preg=0;
    int puntos=0;
    char nombre_a[30];
	char num_cuen[9];
    	
	
	Lectura_datos_alu();
	for(i_preg=0;i_preg<10;i_preg++){
    preguntas();
    }
    impre_datos_alu_();
  
      
      
 return 0;

}
	
	
	void Lectura_datos_alu(){

	char nombre_a[30];
	char num_cuen[9];
	char grade;
	
	
	
	
	
	printf("\t\t\tUNIVERSIDAD NACIONAL AUTONOMA DE MEXICO\n");
	printf("\t\t\t\tFACULTAD DE INGENIERIA\n");
	printf("\t\t\t\tEXAMEN DE CULTURA GENERAL\n\n\n");
	printf("Alumno: \n");
	gets(nombre_a);
	printf("Numero de Cuenta: \n");
	gets(num_cuen);
	
	FILE *archivo;
	
	
	
	archivo = fopen("Exa.txt", "w");
	
		
	fprintf(archivo, "Alumno que Aplico el Examen: \n");
    fputs(nombre_a, archivo);
    fprintf(archivo, "\n");
    fprintf(archivo, "Numero de Cuenta: \n");
    fputs(num_cuen, archivo);
    fclose(archivo);
    
	
}



int preguntas(){
	  	
    int preguntas();
    int azar_preg();
    char pregunta_armada[6];
    char textos[5]=".txt";
    int numero_preg;
		
		
		
		
	srand(time(NULL));
	
	numero_preg= 1+ (rand() % 30);
	
	sprintf(pregunta_armada, "%d", numero_preg);
	
	strcat(pregunta_armada, textos);
	
	
	
	  	
  FILE* pregunta_azar=NULL;
  char* n_archivo = pregunta_armada;
  char* pregunta[40];
  char* opciones[40];
  int respuesta;
  int res_alu=0;
 
  
  pregunta_azar= fopen(n_archivo, "r");
  if(pregunta_azar==NULL){
  	printf("noooooo jala");
   }
  
  fscanf(pregunta_azar," %[^\n]", &pregunta);
  fscanf(pregunta_azar," %[^\n]", &opciones);
  fscanf(pregunta_azar,"%i",&respuesta);
  
   fclose(pregunta_azar);
  printf("\n");
  printf("%s\n",pregunta);
  printf("\n");
  printf("%s\n",opciones);
  printf("R=\n");
  scanf("%i", &res_alu);
  
  
  if( respuesta == res_alu){
  puntos++;
  }






}
int x;
int i_preg=0;


void impre_datos_alu_(){
	
  	
  	FILE *archivo;
	
	
	
	archivo = fopen("Exa.txt", "a");
	
    fprintf(archivo, "\nCalificacion:\n %d",puntos);
    
	
	
	fclose(archivo);
  	printf("Concluyo el examen\n\a");
  	while((x=getchar()) != EOF){
	printf("tu calificacion final es : %d\n",puntos);
	
	printf("pulsa A para repetirlo con tu mismo numero de cuenta\n");
	printf("pulsa B para repetir el examen con un nuevo numero de cuenta\n");
	printf("pulsa EOF (ctrl z) para salir\n");
	
	switch(x){
	case 'A' : case 'a' :
	for(i_preg=0;i_preg<10;i_preg++){
    preguntas();
    }
    imprime_datos();
	break;	
	case 'B' : case 'b':
		Lectura_datos_alu_nuev();
	for(i_preg=0;i_preg<10;i_preg++){
    preguntas();
    }
    impre_datos_alu_();
	
	case '\n': case ' ':
			break;
	default:
		printf("valor incorrecto\n");
		printf("ingrese de nuevo el valor");
		
		
		
		
		
	}
}
}
void imprime_datos(){
    int puntos_a;
	
	
	
  	
  	FILE *archivo;
	
	
	
	archivo = fopen("Exa2.txt", "w");
	
    fprintf(archivo, "\nCalificacion:\n %d",puntos);
    puntos_a=puntos;
	
	
	fclose(archivo);
  
		
		
		
		
	}
	

 


void Lectura_datos_alu_nuev(){
    char nombre_a[30];
	char num_cuen[9];

    printf("Alumno: \n");
	gets(nombre_a);
	printf(" \n");
	gets(num_cuen);
	
	FILE *archivo;
	
	
	
	archivo = fopen("Exanuev.txt", "w");
	
		
	fprintf(archivo, "\n");
    fprintf(archivo, "Numero de Cuenta: \n");
    fputs(num_cuen, archivo);
    fclose(archivo); 










}




