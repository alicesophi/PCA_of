#include <stdio.h>
#include <string.h>

int main() {
    int conta=1;
    float nota1, nota2, nota3, media=0, maior1=0, maior2=0, maior3=0, menor1=0, menor2=0, menor3=0, maior_media=0, menor_media=0;
    char repetir[4]= "sim";
    
    while(strcmp(repetir, "sim")==0){
    	
	    printf("Digite as tres notas do aluno %d: ", conta);
	    scanf("%f %f %f", &nota1, &nota2, &nota3);
	    
	    media = (nota1 + nota2 + nota3)/3;
		
		if(conta==1){
	    	maior1=nota1;
		    maior2=nota2;
		    maior3=nota3;   
		    menor1=nota1;
		    menor2=nota2;
		    menor3=nota3;     
			
			maior_media = media;
	    	menor_media = media;   
		}
		
		else{
			//Comparando nota1
			if(nota1>maior1)
				maior1 = nota1;
			if(nota1<menor1)
				menor1 = nota1;
				
			//Comparando nota2
			if(nota2>maior2)
				maior2 = nota2;
			if(nota2<menor2)
				menor2 = nota2;
				
			//Comparando nota3
			if(nota3>maior3)
				maior3 = nota3;
			if(nota1<menor1)
				menor3 = nota3;
				
			//Comparando media
			if(media>maior_media)
				maior_media = media;
			if(media<menor_media)
				menor_media = media;
		}
	    
	    printf("Deseja continuar? (sim/nao): ");
	    scanf("%s", repetir);
	    
	    conta++;
    }
    
  printf("\nNota maior do primeiro exercicio: %.1f", maior1);
	printf("\nNota menor do primeiro exercicio: %.1f \n", menor1);
	
	printf("\nNota maior do segundo exercicio: %.1f", maior2);
	printf("\nNota menor do segundo exercicio: %.1f \n", menor2);
	
	printf("\nNota maior do terceiro exercicio: %.1f", maior3);
	printf("\nNota menor do terceiro exercicio: %.1f \n", menor3);
	
	printf("\nMaior media eh: %.1f", maior_media);
	printf("\nMenor media eh: %.1f", menor_media);
	    
    return 0;
}
