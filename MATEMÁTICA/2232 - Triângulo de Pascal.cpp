// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Triângulo de Pascal
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2232

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, s;
    cin >> n;
    while(n--){
        s = 0;
        cin >> m;
        for(int i = 0; i < m; i++)
            s += pow(2,i);
        cout << s << endl;
    }

    return 0;
}

