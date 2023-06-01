/*
    Crie um programa que calcule e exiba o perímetro
    de uma circunferência, solicitando o raio ao usuário.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double raio;
    cout << "Digite o raio da circunferência: ";
    cin >> raio;

    cout << "Perímetro: " << 2 * M_PI * raio;
}