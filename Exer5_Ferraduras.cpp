//Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

#include <iostream>
using namespace std;

int main()
{
    int qtd_cavalos, qtd_ferraduras;
    cin >> qtd_cavalos;
    qtd_ferraduras = qtd_cavalos * 4;
    cout << qtd_ferraduras;

    return 0;
}

