// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Saco do Papai Noel
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1767

#include <bits/stdc++.h>

using namespace std;

pair<int, pair<int, int>> k(int n, int W, int *wt, int *val)
{
    int T[n + 1][W + 1];
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= W; j++)
        {
            if(i == 0 or j == 0)
                T[i][j] = 0;
            else if(j < wt[i - 1])
                T[i][j] = T[i - 1][j];
            else
                T[i][j] = max(val[i - 1] + T[i - 1][j - wt[i - 1]], T[i - 1][j]);
        }
    }
    int p = 0, w = W, q = 0;
    for(int i = n; i > 0; i--)
    {
        if(T[i][w] != T[i - 1][w])
        {
            w -= wt[i - 1];
            p += wt[i - 1];
            q++;
        }
    }
    return {q, {T[n][W], p}};
}



int main()
{

    int t, n, val[105], wt[105];
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> val[i] >> wt[i];
        pair<int, pair<int, int>> p;
        p = k(n, 50, wt, val);
        cout << p.second.first << " brinquedos\n";
        cout << "Peso: " << p.second.second << " kg\n";
        cout << "sobra(m) " << n - p.first << " pacote(s)\n\n";
    }
    return 0;
}
