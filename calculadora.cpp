#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");

    //Variáveis
    int operador, continuar;
    float num1, num2;

    //Operação desejada
    do{
        printf("Qual operação deseja fazer ?\n");
    printf("\t1 - Soma\n");
    printf("\t2 - Subtração\n");
    printf("\t3 - Divisão\n");
    printf("\t4 - Multiplicação\n");
    scanf("%d", &operador);

    //Colocando valores
    printf("Digite o primeiro número: \n");
    scanf("%f", &num1);
    printf("Digite o segundo número: \n");
    scanf("%f", &num2);

    switch(operador){
        case 1:
            printf("\tA soma dos valores %.2f + %.2f = %.2f\n", num1, num2, num1+num2);
        break;
        case 2:
            printf("\tA subtração dos valores %.2f - %.2f = %.2f\n", num1, num2, num1-num2);
        break;
        case 3:
            printf("\tA divisão dos valores %.2f / %.2f = %.2f\n", num1, num2, num1/num2);
        break;
        case 4:
            printf("\tA multiplicação dos valores %.2f x %.2f = %.2f\n", num1, num2, num1*num2);
        break;
        default:
            printf("\tValor inválido!\n");
        break;
    }
    printf("Deseja continuar ?\n");
    printf("\t1 - Sim\n");
    printf("\t2 - Não\n");
    scanf("%d", &continuar);
    if(continuar != 1){
        printf("Programa será finalizado!");
    }
    }while(continuar == 1);

    return 0;
}
