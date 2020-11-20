#include <iostream>

using namespace std;

int main()
{
    int qtdfuncionarios, numbicicletas;
    float salariominimo, custobicicletas, salariofinal, lucroliquido,comissao, lucrobruto,custofuncionarios;
    setlocale(LC_ALL,"Portuguese");
    cout << "Digite a quantidade de funcionarios da loja: ";
     cin>>qtdfuncionarios;
    cout << "Digite o valor do salario minimo: ";
     cin>>salariominimo;
    cout << "Digite o preço de custo de cada bicicleta: ";
     cin>>custobicicletas;
    cout << "Digite o numero de bicicletas vendidas: ";
     cin>>numbicicletas;
     comissao= custobicicletas*0.15*numbicicletas/qtdfuncionarios;/* O valor de comissão dos funcionarios é = 15% do custo das bicicletas * numero de bicicletas Vendidas dividido pela quantidade de funcionarios*/
    salariofinal= salariominimo*2+comissao; /* O salario final do funcionarios é multiplicado por 2 + o valor da comissao*/
    lucrobruto=custobicicletas*numbicicletas/2; /* O Lucro bruto = custo da bicicleta * o numero de bicicletas vendidas * 50%*/
    custofuncionarios= salariofinal*qtdfuncionarios; /* o custo de funcionarios é = o valor do salario* quantidade de funcionarios*/
    lucroliquido= lucrobruto - custofuncionarios;   /* O Lucro liquido vai ser o lucro bruto- o valor de custo de funcionarios*/
    cout << "O salario final de cada empregado é: "<<salariofinal << endl;
    cout << "O Lucro liquido da loja é: "<<lucroliquido;
}
