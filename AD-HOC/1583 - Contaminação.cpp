// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Contaminação
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1583

#include <bits/stdc++.h>

using namespace std;

int n, m;
string v[55];
bool cor[55][55];

void ff(int x, int y)
{
    if(x < 0 or x >= n or y < 0 or y >= m)
        return;
    if(v[x][y] == 'X')
        return;
    if(cor[x][y] == true)
        return;
    cor[x][y] = true;
    if(v[x][y] == 'A')
        v[x][y] = 'T';
    ff(x + 1, y);
    ff(x, y + 1);
    ff(x - 1, y);
    ff(x, y - 1);
}

int main()
{
    while(cin >> n >> m and (n + m))
    {
        for(int i = 0; i < n; i++)
            cin >> v[i];
        for(int i = 0; i < n; i++)
            memset(cor[i], 0, sizeof(cor[i])); 
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(v[i][j] == 'T' and cor[i][j] == false)
                    ff(i, j);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cout << v[i][j];
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}

