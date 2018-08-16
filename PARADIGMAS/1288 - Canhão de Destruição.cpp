// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Canhão de Destruição
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1288

#include <bits/stdc++.h>

using namespace std;

int knapsack(int W, int *wt, int *val, int n)
{
	int i, w;
	int K[n + 1][W + 1];

	for (i = 0; i <= n; i++)
	{
		for (w = 0; w <= W; w++)
		{
			if (i == 0 or w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]],  K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	} 
	return K[n][W];
}

int main()
{

	int t, n, k, r, wt[55], vl[55];
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> vl[i] >> wt[i];
		cin >> k >> r;
		int p = knapsack(k, wt, vl, n); 
		cout << ((p >= r) ? "Missao completada com sucesso\n": "Falha na missao\n");
	}
	

	return 0;
}
