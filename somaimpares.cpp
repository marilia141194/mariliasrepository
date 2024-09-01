#include <iostream>

using namespace std;

int main()
{
    int x, y, troca, soma;

    cout << "Digite dois numeros: " << endl;
    cin >> x >> y;


    // se o x for maior que o y, eu faço essa lógica para troca
    // a ordem e fazer o x ficar menor que o y, assim ele fica crescente.
    if (x > y)
    {
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;
    for (int i = x+1; i < y; i++)
    {
        if (i % 2 != 0) // para achar o impar é sempre "i%2!=0"
        {
            soma = soma + i;
        }
    }

    cout << "Soma dos impares: " << soma << endl;

    return 0;
}
