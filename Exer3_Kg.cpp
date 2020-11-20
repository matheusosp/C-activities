//Faça um programa que receba o valor do quilo de um produto e a quantidade de quilos do produto consumida calculando o valor final a ser pago.

#include <iostream>
using namespace std;

int main()
{
    float val_kg_prod, qtd, val_pg;

    cin >> val_kg_prod;
    cin >> qtd;
    val_pg = qtd * val_kg_prod;
    cout << val_pg;

    return 0;
}

