/*
Escreva um programa que calcule a média geométrica entre
três números intormados pelo usuário.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double n1, n2, n3;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Digite o terceiro numero: ";
    cin >> n3;

    cout << "Media geometrica: " << pow(n1 * n2 * n3, 1.0 / 3) << endl;
}