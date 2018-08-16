// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Lajotas Hexagonais
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1393

#include <bits/stdc++.h>

using namespace std;

int v[50];

void fib()
{
    v[0] = 1;
    v[1] = 2;
    for(int i = 2; i < 45; i++)
        v[i] = v[i - 1] + v[i - 2];
}

int main()
{
    int t;
    fib();
    while(cin >> t and t)
    {
        cout << v[t - 1] << '\n';
    }

	return 0;
}

