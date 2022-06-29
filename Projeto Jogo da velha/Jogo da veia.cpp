#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int i , j;
	char simbolo1,simbolo2;
	char jogo[3][3] = {{' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '}};					  
	int jogadas = 0;
	
	setlocale(LC_ALL, "portuguese");	
	do{
		
	printf("Jogador 1, defina um simbolo[X ou O]: ");
	fflush(stdin);
	scanf("%c", &simbolo1);
	
	switch(simbolo1){
		case 'X': simbolo2 = 'O';
		system("cls");
		printf("Jogador 1: seu simbolo é o X!\n");
		printf("Jogador 2, seu simbolo é o O!\n\n");
		printf("Pressione ENTER para continuar: \n");
		break;
		
		case 'O': simbolo2 = 'X';
		system("cls");
		printf("Jogador 1, seu simbolo é o O!\n");
		printf("Jogador 2, seu simbolo é o X!\n\n");
		printf("Pressione ENTER para continuar: \n");
		break;
		
		if(simbolo1 != 'X' && simbolo1 != 'O'){
			printf("Simbolo inválido, digite outro!\n");
			system("pause");
		}
		
	}} while(simbolo1 != 'X' && simbolo1 != 'O');
	
	system("pause");
	
	do{
		system("cls");
	printf("%c  |  %c  |  %c\n", jogo[0][0], jogo[0][1], jogo[0][2]);
	printf("______\n");
	printf("%c  |  %c  |  %c\n", jogo[1][0], jogo[1][1], jogo[1][2]);
	printf("______\n");
	printf("%c  |  %c  |  %c\n\n", jogo[2][0], jogo[2][1], jogo[2][2]);
	
	if(jogadas %2 == 0){
		printf("Vez do jogador 1!\n");
	}else printf("Vez do jogador 2!\n");
	
	printf("Digite a linha desejável: ");
	scanf("%d", &i);
	printf("Agora digite a coluna desejável: ");
	scanf("%d", &j);
	
	if(jogo[i - 1][j - 1] != 'X' && jogo[i - 1][j - 1] != 'O'){
	
	if(jogadas %2 == 0){
		jogo[i - 1][j - 1] = simbolo1;
	}else jogo[i - 1][j - 1] = simbolo2;
	
	if(i < 1 || j < 1 || i > 3 || j > 3 ){
		jogo[i][j] == 0;
		jogadas--;}
		
 jogadas++;
}
else {
	printf("Selecione outra posição! Posição ocupada!\n");
	jogadas++;
	jogadas--;
}

	if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X'){jogadas = 11;}
	
	if(jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X'){jogadas = 11;}
	
	if(jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){jogadas = 11;}
	
	if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){jogadas = 11;}
	
	if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){jogadas = 11;}
	
	if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X'){jogadas = 11;}
	
	if(jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X'){jogadas = 11;}
	
	if(jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){jogadas = 11;}
		
	if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O'){jogadas = 12;}
	
	if(jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O'){jogadas = 12;}
	
	if(jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O'){jogadas = 12;}
	
	if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){jogadas = 12;}
	
	if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O'){jogadas = 12;}
	
	if(jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O'){jogadas = 12;}
	
	if(jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O'){jogadas = 12;}
	
	if(jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){jogadas = 12;}
	
	}while (jogadas < 9);
	
	system("cls");
	printf("%c  |  %c  |  %c\n", jogo[0][0], jogo[0][1], jogo[0][2]);
	printf("______\n");
	printf("%c  |  %c  |  %c\n", jogo[1][0], jogo[1][1], jogo[1][2]);
	printf("______\n");
	printf("%c  |  %c  |  %c\n\n", jogo[2][0], jogo[2][1], jogo[2][2]);
	
	if(jogadas == 9 && jogadas != 11 && jogadas != 12)
		printf("EMPATE!\n\n");
	else if(jogadas == 11 && jogadas != 12 && jogadas != 9)
		printf("\nO VENCEDOR É O SÍMBOLO X!\n\n");
	else if(jogadas == 12 && jogadas != 11 && jogadas != 9)
		printf("\nO VENCEDOR É O SÍMBOLO O!\n\n"); 

	system("pause");
}

