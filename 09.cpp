/*
    Escreva um programa que calcule o perímetro e a área
    de um retângulo, utilizando as fórmulas P = 2(l + c)
    e A = lc, onde l é a largura e c é o comprimento.
*/
#include <iostream>

using namespace std;

int main()
{
    double c, l;
    cout << "Digite o comprimento: ";
    cin >> c;

    cout << "Digite a largura: ";
    cin >> l;

    cout << "Área = " << l * c << endl;
    cout << "Perímetro = " << 2 * (l + c) << endl;
}
