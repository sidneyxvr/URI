// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Teorema de Pitágoras
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1582

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v[3];
    while(cin >> v[0] >> v[1] >> v[2])
    {
        sort(v, v + 3);
        if(v[2] * v[2] == v[1] * v[1] + v[0] * v[0])
        {
            if(__gcd(__gcd(v[0], v[1]), v[2]) == 1)
                cout << "tripla pitagorica primitiva\n";
            else
                cout << "tripla pitagorica\n";
        }
        else
        {
            cout << "tripla\n";
        }
    }

	return 0;
}

