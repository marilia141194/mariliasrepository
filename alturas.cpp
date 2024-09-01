#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double somaAlturas, mediaAlturas, cont, porcent;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];

    for (int i=0; i < n; i++){
        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cin.ignore(INT_MAX, '\n');
        cout << "Nome: ";
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    somaAlturas = 0;
    for (int i=0; i < n; i++){
        somaAlturas = somaAlturas + alturas[i];
    }

    mediaAlturas = somaAlturas / n;
    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << mediaAlturas << endl;

    cont = 0;
    for (int i=0; i < n; i++){
        if (idades[i]<16){
            cont = cont + 1;
        }
    }

    porcent = (double)cont / n * 100;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcent << "%" << endl;

    for (int i=0; i < n; i++){
        if (idades[i]<16){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
