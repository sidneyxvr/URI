// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Derivada de Polinômios
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2154

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n, a, b;
    char c;
    while(cin >> n)
    {
        while(n--)
        {
            scanf("%dx%d", &a, &b);
            if(n)
                cin >> c;
            cout << b*a << "x";
            if(b-1 > 1)
                cout << b-1;
            if(n)
                cout << " + ";
        }
        cout << '\n';
    }

    return 0;
} 
