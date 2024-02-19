#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale.h>

#define TAM 3

using namespace std;

void shuffle(int num[], int len){
    int temp = 0;
    int randomIndex = 0;

    for(int i=0; i < len; i++){
        randomIndex = rand() % len;
        temp = num[i];
        num[i] = num[randomIndex];
        num[randomIndex] = temp;
    }
}
int main(){
    setlocale(LC_ALL, "");

    srand(time(NULL));
    int num[TAM] = {1, 2, 3};
    int player;

    shuffle(num, TAM);

    cout << " |--JOKENPO--| " << endl;
    cout << "Qual vc escolhe ?" << endl;
    cout << "1 - PEDRA" << endl;
    cout << "2 - PAPEL" << endl;
    cout << "3 - TESOURA" << endl;
    cin >> player;
    cout << endl;

    do{
        switch(player){
        case 1:
            cout << "Você escolheu: PEDRA" << endl;
            break;
        case 2:
            cout << "Você escolheu: PAPEL" << endl;
            break;
        case 3:
            cout << "Você escolheu: TESOURA" << endl;
            break;
        default:
            cout << "NÚMERO INVÁLIDO, TENTE NOVAMENTE !" << endl;
            break;
        }
    }while(player < 1 || player > 3);


    for(int i = 0; i < 1; i++){
        cout << " " << num[i] << " ";
        if(num[i] == 1){
            cout << "Máquina escolhe: PEDRA" << endl;
        }else if(num[i] == 2){
            cout << "Máquina escolhe: PAPEL" << endl;
        }else{
            cout << "Máquina escolhe: TESOURA" << endl;
        }
    }
    if(player == num[0]){
        cout << "EMPATE !" << endl;
    }else if(player == 1 && num[0] == 3 || player == 2 && num[0] == 1 || player == 3 && num[0] == 2){
        cout << "VOCÊ GANHOU !" << endl;
    }else{
        cout << "VOCÊ PERDEU !" << endl;
    }


    cout << endl;

    return 0;
}
