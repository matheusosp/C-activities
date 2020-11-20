//Além da soma exiba a média dos valores...

#include <iostream>
using namespace std;

int main()
{
    int valor1, valor2, valor3, soma;
    float media;

    cin >> valor1;
    cin >> valor2;
    cin >> valor3;

    soma = valor1+valor2+valor3;
    media = soma/3.0;

    cout << media;


    return 0;
}

