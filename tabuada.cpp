#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    for(i = 1; i < 11; i++){
        int tabuada = num1 * i;
        printf("%d x %d = %d\n", num1, i, tabuada);
    }


    return 0;
}
