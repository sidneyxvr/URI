// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Copa do Mundo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2376

#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    int a, b;
    queue<int> fila;
    for(int i = 0; i < 16; i++)
        fila.push('A' + i);
    for(int i = 0; i < 15; i++)
    {
        cin >> a >> b;
        if(a > b)
        {
            fila.push(fila.front());
            fila.pop();
            fila.pop();
        }
        else
        {
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
    }
    cout << (char)fila.front() << '\n';

    return 0;
} 
