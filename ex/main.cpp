#include <iostream>

using namespace std;

int main()
{
    int numero,a,b,c,d,soma,multiplicacao,subtracao,digitoverificador;
    setlocale(LC_ALL,"Portuguese");
    cout << "Digite o numero da conta com 4 digitos: ";
     cin>>numero;
     d=numero%10;  /* o resto da divisão do numero por 10 sempre vai resultar no ultimo digito do numero,por exemplo se o usuario digitar 5896, o resultado vai ser 6 */
     c=numero/10%10;    /* Para obter o terceiro digito do numero, primeiro deve se dividir por 10, para excluir quarto digito do numero, e entao o resto(%) da divisão por 10 vai ser o terceiro digito do numero */
     b=numero/100%10;  //Para ter o segundo digito se divide por 100 para isolar os 2 primeiro digitos e entao o resto da divisão vai ser o segundo digito/
     a=numero/1000;  //Para ter o primeiro digito se divide por 1000 para isolar o primeiro numero/
    soma=a+b+c+d;
    multiplicacao=a*b*c*d;
    subtracao=multiplicacao-soma;
    digitoverificador=subtracao%9;
    cout<<"O digito verificador é: "<<digitoverificador;
}
