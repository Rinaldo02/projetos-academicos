#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");

    //Vari�veis
    int operador, continuar;
    float num1, num2;

    //Opera��o desejada
    do{
        printf("Qual opera��o deseja fazer ?\n");
    printf("\t1 - Soma\n");
    printf("\t2 - Subtra��o\n");
    printf("\t3 - Divis�o\n");
    printf("\t4 - Multiplica��o\n");
    scanf("%d", &operador);

    //Colocando valores
    printf("Digite o primeiro n�mero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero: \n");
    scanf("%f", &num2);

    switch(operador){
        case 1:
            printf("\tA soma dos valores %.2f + %.2f = %.2f\n", num1, num2, num1+num2);
        break;
        case 2:
            printf("\tA subtra��o dos valores %.2f - %.2f = %.2f\n", num1, num2, num1-num2);
        break;
        case 3:
            printf("\tA divis�o dos valores %.2f / %.2f = %.2f\n", num1, num2, num1/num2);
        break;
        case 4:
            printf("\tA multiplica��o dos valores %.2f x %.2f = %.2f\n", num1, num2, num1*num2);
        break;
        default:
            printf("\tValor inv�lido!\n");
        break;
    }
    printf("Deseja continuar ?\n");
    printf("\t1 - Sim\n");
    printf("\t2 - N�o\n");
    scanf("%d", &continuar);
    if(continuar != 1){
        printf("Programa ser� finalizado!");
    }
    }while(continuar == 1);

    return 0;
}
