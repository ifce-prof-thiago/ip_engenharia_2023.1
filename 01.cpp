/************************************************************
    Escreva um programa que solicite ao usuário
    dois números e exiba a soma, subtração, multiplicação
    e a divisão entre eles
***********************************************************/
#include <iostream>

using namespace std;

int main()
{
    double n1, n2;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Soma: " << n1 + n2 << endl;
    cout << "Sub: " << n1 - n2 << endl;
    cout << "Mult: " << n1 * n2 << endl;
    cout << "Div: " << n1 / n2 << endl;
}
