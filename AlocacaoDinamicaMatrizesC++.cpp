#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <new>

using namespace std;
int main(){

    //Definindo vari�veis
    int linhas = 3, colunas = 3, i, j;
    int **matriz;

    //Lendo o tamanho pelo usu�rio
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    //Alocando as linhas
    matriz = (int **) new int[linhas];

    //Alocando mem�ria para as colunas de cada linha
    for(i = 0; i < linhas; i++){
        matriz[i] = (int*) new int[colunas];
    }

    //Preenchendo valores e exibindo a matriz
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d", matriz[i][j]);
        }
         printf("\n");
    }

    //Libera a mem�ria
    free(matriz);

    //Retorno da Fun��o
    return 0;
}
