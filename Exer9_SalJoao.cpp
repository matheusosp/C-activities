//Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que est�o atrasadas. Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a um algoritmo que calcule e mostre quanto restar� do sal�rio do Jo�o.

#include <iostream>
using namespace std;

int main(){

    float salario=1200, C1=200, C2=120, multa=2;
    salario = salario - (C1 + multa / 100 * C1) - (C2 + multa / 100 * C2); //salario = salario - C1 * 1.02 - C2 * 1.02; //873.60
    cout << salario;

    return 0;
}

