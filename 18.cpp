/*
    Crie um programa que receba uma frase e substitua
    todas as letras "a" por "e".
*/
#include <iostream>

using namespace std;

int main()
{
    string frase;
    cout << "Digite uma frase:";
    getline(cin, frase);

    cout << frase.size() << endl;

    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i] == 'a')
        {
            frase[i] = 'e';
        }

        if (frase[i] == 'A')
        {
            frase[i] = 'E';
        }
    }

    cout << "NOVA FRASE: " << frase << endl;
}
