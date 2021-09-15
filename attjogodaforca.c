#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

	char palavra[3][10]={"PIZZA","CORVO","ESPANTALHO"},letra,secreta[3][10];
	int tam,a,b,c,linha,chances,acertos,op;
	bool acerto;

//Tamanho da palavra
int tamanho(int n,int l){
	while(palavra[l][n] != '\0'){
	n++;
	tam++;
	}
	return 0;
} 
//Fazer os "-" da palavra secreta.
int secreto(int n,int l){
	for(n=0;n<=10;n++){
	secreta[l][n] = '-';
	}
	return 0;
}
	
//Começo do jogo.
	int jogo(int n, int l){
	while((chances > 0) && (acertos!=tam)){
	   		printf("Chances restantes: %d\n\n", chances);
    		printf("\nPalavra secreta:\n");
    		for(n=0;n<tam;n++){
    			printf("%c",secreta[l][n]);	    			
    		}
    		printf("\nDigite uma letra:\n");
    		scanf("%c",&letra);
    		
    		for(n=0;n<tam;n++){
    			if(palavra[l][n] == toupper(letra)){
    				acerto = true;
    				secreta[l][n]=palavra[l][n];
    				acertos++;
    			}
			}
			if(!acerto){
				chances--;	
			}		
			acerto = false;
			system("cls");
			}
			return 0;
			}
		
//Final do jogo			
int final(){
	if(acertos==tam){
	printf("\nVocê venceu!\n");
	system("pause");
    system("cls");
}else{
	printf("\nVocê perdeu! :(\n)");
	system("pause");
	system("cls");
}
 	return 0;
}			
			
			

int main(){
	setlocale(LC_ALL, "Portuguese");
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
	printf("\n1-Comida.\n2-Animal.\n3-Objeto\n4-Sair\n\nOpção:");
	scanf("%d",&op);
	system("cls");
		switch(op){
			case 1:
				linha=0;
				tamanho(linha,a);
				secreto(linha,a);
				jogo(linha,a);
				final();
				break;
			case 2:
				linha=1;
				tamanho(linha,b);
				secreto(linha,b);
				jogo(linha,b);
				final();
				break;	
			case 3:
				linha=2;
				tamanho(linha,c);
				secreto(linha,c);
				jogo(linha,c);
				final();
				break;
		}
		
	
	}while(op != 4);
	
	return 0;
}
