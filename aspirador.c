// Discente: Lucas Anderson Ribeiro.

#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(void) {
	
	char local;
	int estado;
	local = 'A'; // Memória inicial do local do aspirador.
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Instruções:\n Digite '0' para - limpo.\n Digite '1' para - sujo.\n\n");
	
	printf(" Local atual do aspirador de pó: %c.", local);
	printf("\n Analisando o estado do local. O local está: "); // Neste momento o input do usuário representa a coleta de dados que, em teoria, se daria pelos sensores.
	scanf("%d", &estado);
	
	while(1) {
		if(estado == 0) {
			if(local == 'A') {
				printf("\n Limpo. Movendo-se para B."); // Neste momento, ocorreria a ativação de um servomotor conectado às rodas do aspirador, movendo-o para B.
				sleep(2);
				local = 'B'; // O aspirador que está em A, limpa o local e move-se para B.
				printf("\n\n =----- ----- ----- ----- ----- ----- ----- -----=");
				printf("\n\n Local atual: %c. O local está: ", local);
			} else {
				printf("\n Limpo. Movendo-se para A."); // Neste momento, ocorreria a ativação de um servomotor conectado às rodas do aspirador, movendo-o para A (rotação inversa).
				sleep(2);
				local = 'A'; // O aspirador que está em B, limpa o local e move-se para A.
				printf("\n\n =----- ----- ----- ----- ----- ----- ----- -----=");
				printf("\n\n Local atual: %c. O local está: ", local);
			}
			scanf("%d", &estado);
		} else {
			if(local == 'A') {
				printf("\n Sujo. Aspirando A..."); // Neste momento, ocorreria a ativação de uma ventuinha acoplada a um servomotor para aspirar a poeira.
				sleep(2);
				printf("\n\n =----- ----- ----- ----- ----- ----- ----- -----=");
				printf("\n\n Reanalisando %c. O local está: ", local); // O aspirador aspira A e o analisa novamente, pra conferir se está limpo.
			} else {
				printf("\n Sujo. Aspirando B..."); // Neste momento, ocorreria a ativação de uma ventuinha acoplada a um servomotor para aspirar a poeira.
				sleep(2);
				printf("\n\n =----- ----- ----- ----- ----- ----- ----- -----=");
				printf("\n\n Reanalisando %c. O local está: ", local); // O aspirador aspira B e o analisa novamente, pra conferir se está limpo.
			}
			scanf("%d", &estado);
		}
	}
	return 0;
}

