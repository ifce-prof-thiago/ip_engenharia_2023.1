/*
Escreva um programa que calcule o IMC de um indivíduo,
utilizando a seguinte fórmula: IMC = massa / altura²
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double massa, altura;

    cout << "Digite sua massa em Kg: ";
    cin >> massa;

    cout << "Digite sua altura em metros: ";
    cin >> altura;

    cout << "IMC: " << massa / pow(altura, 2) << endl;
}