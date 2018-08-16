// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Guerreiros Etruscos Nunca...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1308

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    uint64_t n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << (uint64_t)((sqrt(1 + 8 * n) - 1) / 2) << '\n';
    }
	return 0;
}

