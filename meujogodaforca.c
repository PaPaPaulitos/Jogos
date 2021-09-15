#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[3][10]={"PIZZA","CORVO","ESPANTALHO"},letra,secreta[3][10];
	int tam,a,b,c,chances,acertos,op;
	bool acerto;
	

	do{
		
	chances = 20;
	acertos = 0;
	a = 0;
	b = 0;
	c = 0;
	tam = 0;
	acerto = false;
		
	printf("\n====Jogo da Forca====\n");
	printf("\nEscolha uma opção:\n");
	printf("\n1-Comida.\n2-Animal.\n3-Objeto\n\nOpção:");
	scanf("%d",&op);
	system("cls");
	    switch(op){
	    	case 1:
    		//Tamanho da palavra.
	    	while(palavra[0][a] != '\0'){
	    		a++;
	    		tam++;
	    	}
	    	//Fazer os "-" da palavra secreta.
	    	for(a=0;a<=10;a++){
	    		secreta[0][a] = '-';
	    			    			
	    	}
	    	//Começo do jogo.
	    	while((chances > 0) && (acertos!=tam)){
		   		printf("Chances restantes: %d\n\n", chances);
	    		printf("\nPalavra secreta:\n");
	    		for(a=0;a<tam;a++){
	    			printf("%c",secreta[0][a]);	    			
	    		}
	    		printf("\nDigite uma letra:\n");
	    		scanf("%c",&letra);
	    		
	    		for(a=0;a<tam;a++){
	    			if(palavra[0][a] == toupper(letra)){
	    				acerto = true;
	    				secreta[0][a]=palavra[0][a];
	    				acertos++;
	    			}
    			}
			if(!acerto){
				chances--;	
		
			}
			acerto = false;
			system("cls");
			
			
	    	}
			if(acertos==tam){
				printf("\nVocê venceu!\n");
    			system("pause");
                system("cls");
			}else{
				printf("\nVocê perdeu! :(\n)");
				system("pause");
				system("cls");
			}
	    	break;
	    		case 2:
    		//Tamanho da palavra.
	    	while(palavra[1][b] != '\0'){
	    		b++;
	    		tam++;
	    	}
	    	//Fazer os "-" da palavra secreta.
	    	for(b=0;b<=10;b++){
	    		secreta[1][b] = '-';
	    			    			
	    	}
	    	//Começo do jogo.
	    	while((chances > 0) && (acertos!=tam)){
		   		printf("Chances restantes: %d\n\n", chances);
	    		printf("\nPalavra secreta:\n");
	    		for(b=0;b<tam;b++){
	    			printf("%c",secreta[1][b]);	    			
	    		}
	    		printf("\nDigite uma letra:\n");
	    		scanf("%c",&letra);
	    		
	    		for(b=0;b<tam;b++){
	    			if(palavra[1][b] == toupper(letra)){
	    				acerto = true;
	    				secreta[1][b]=palavra[1][b];
	    				acertos++;
	    			}
    			}
			if(!acerto){
				chances--;	
		
			}
			acerto = false;
			system("cls");
			
			
	    	}
			if(acertos==tam){
				printf("\nVocê venceu!\n");
    			system("pause");
                system("cls");
			}else{
				printf("\nVocê perdeu! :(\n)");
				system("pause");
				system("cls");
			}
	    	break;
	    		case 3:
    		//Tamanho da palavra.
	    	while(palavra[2][c] != '\0'){
	    		c++;
	    		tam++;
	    	}
	    	//Fazer os "-" da palavra secreta.
	    	for(c=0;c<=10;c++){
	    		secreta[2][c] = '-';
	    			    			
	    	}
	    	//Começo do jogo.
	    	while((chances > 0) && (acertos!=tam)){
		   		printf("Chances restantes: %d\n\n", chances);
	    		printf("\nPalavra secreta:\n");
	    		for(c=0;c<tam;c++){
	    			printf("%c",secreta[2][c]);	    			
	    		}
	    		printf("\nDigite uma letra:\n");
	    		scanf("%c",&letra);
	    		
	    		for(c=0;c<tam;c++){
	    			if(palavra[2][c] == toupper(letra)){
	    				acerto = true;
	    				secreta[2][c]=palavra[2][c];
	    				acertos++;
	    			}
    			}
			if(!acerto){
				chances--;	
		
			}
			acerto = false;
			system("cls");
			
			
	    	}
			if(acertos==tam){
				printf("\nVocê venceu!\n");
    			system("pause");
                system("cls");
			}else{
				printf("\nVocê perdeu! :(\n)");
				system("pause");
				system("cls");
			}
	    	break;
	    }
	    	


	}while(op !=4);
	return 0;
}




