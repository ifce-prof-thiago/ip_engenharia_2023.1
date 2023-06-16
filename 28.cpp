/*
    Escreva um programa que solicite três números e
    exiba o maior deles.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Digite três números: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << "Maior = " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "Maior = " << b << endl;
    }
    else
    {
        cout << "Maior = " << c << endl;
    }
}