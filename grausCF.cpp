#include <stdio.h>
#include <stdlib.h>

int main(){

    //Declarando variaveis
    double f, c;

    //Pegando os valores double
    printf("Digite os graus em Fahrenheit para Celsius: ");
    scanf("%lf", &f);

    //Calculando a convers�o
    c = (f - 32.0) * (5.0/9.0);

    //Imprimindo a convers�o
    printf("%.2lf Fahrenheit equivale a %.2lf Celsius.\n", f, c);

    //Declarando vari�veis
    int fah, cel;

    //Passando valores
    fah = f;

    //Calculando a convers�o

    cel = (fah - 32)*(5.0/9.0);

    //Imprimindo a convers�o
    printf("%d Fahrenheit equivale a %d Celsius.\n", fah, cel);

    return 0;
}
