#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "");

    float nota1, nota2;

    do{printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    if(nota1 == 50){
        printf("O programa ser� finalizado!");
        exit(0);
    }

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    if(nota1 < 0 ||nota1 > 10){
        printf("Primeiro valor inv�lido\n");
    }
    if(nota2 < 0 ||nota2 > 10){
        printf("Segundo valor inv�lido\n");
    }

    }while((nota1 < 0 || nota2 < 0) || (nota1 > 10 || nota2 > 10));


    printf("A m�dia das notas �: %.2f", (nota1 + nota2)/2);

}
