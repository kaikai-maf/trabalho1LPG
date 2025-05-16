#include <stdio.h>
#include <stdlib.h>
#define L 8
#define C 10


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int novo_conjunto (int x, int contador);
int inserir_dados (int i, int contador, int m[L][C]);

int main(int argc, char *argv[]) {
	
	int m [L][C] = {{0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}};
	int contador = 0;
	int x;
	
	while (x != 9){
	printf("\nGerenciamento de Conjuntos\n\n");
	printf("Menu\n\n");
    printf("1-Criar um novo conjunto vazio\n");
	printf("2-Inserir dados em um conjunto\n");
    printf("3-Remover um conjunto\n");
    printf("4-Fazer a uniao entre dois conjuntos\n");
	printf("5-Fazer a interseccao entre dois conjuntos\n");
	printf("6-Mostrar um conjunto\n");
	printf("7-Mostrar todos os conjuntos\n");
	printf("8-Fazer busca por um valor\n");
	printf("9-Sair do programa\n");
	printf("Escolha uma opcao:\n");
	scanf("%i", &x);
	
	switch(x){
		case 1:
			contador = novo_conjunto(x, contador);
		break;
		case 2:
			
		break;
			
		
	}
	
	return 0;
    }
}

int novo_conjunto (int x, int contador){
	if (x < L){
		return contador++;
	}
	else {
		printf("Nao eh possivel criar mais um conjunto vazio\n");
		return contador;
	}
}

int inserir_dados (int i, int contador, int m[L][C]){
	int d;
    int valor;
	printf("Escolha um conjunto que deseja inserir dados:\n");
	scanf("%d", &i);
	
	for (int j = buscasequencia(valor = 0);  j < C; j++){
		printf("Insira os dados:\n");
		scanf("%d", &d);
		if(d == 0){
			break;
		}
		if(busacasequencial(d)) // verificar numeros rep
		m[i][j]	 = d;			
	}
	
	
}






