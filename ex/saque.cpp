
#include <iostream>

using namespace std;

int main()
{
    int valor,nota10,nota5,nota1;

    cout << "Digite o valor a ser sacado:";
    cin >> valor;

    nota10 = valor/10;  /* Valor a ser sacado / notas de 10, eu tenho quantidade de notas de 10 que vao ser retiradas*/
    valor = valor - nota10*10; /* Valor - qtd de notas de 10 *10 para ver se sobrou algo para sacar  */
    nota5 = valor/5;   /* Valor a ser sacado se sobrar algo depois de ter sacado as notas de 10 / notas de 5, que da o resultado de notas de 5 que irá ser sacada*/
    valor = valor - nota5*5;  /* Valor - qtd de notas de 5 *5 para ver se sobrou algo para sacar  */
    nota1 = valor/1;   /* Valor a ser sacado se sobrar algo depois de ter sacado as notas de 5 e de 10 / notas de 1, eu vou ter qtd de notas de 1 para retirar*/
    valor = nota1 - valor*1;


    cout << "notas de 10: " <<nota10<< " notas de 5: " <<nota5<<"  Notas de 1: " << nota1;

    return 0;

}

