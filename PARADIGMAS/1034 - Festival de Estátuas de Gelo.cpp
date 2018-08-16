// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Festival de Estátuas de Gelo
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1034

#include <bits/stdc++.h>

using namespace std;

//valor N, moedas M, vetor moedas m
int num_moedas(int N, int M, int * m) 
{
    int dp[N + 1];
    dp[0] = 0;
    for(int i = 1; i <= N; i++) 
    {
        dp[i] = 1000000;
        for(int j = 0; j < M; j++) 
            if(i - m[j] >= 0)
                dp[i] = min(dp[i], dp[i - m[j]] + 1);
    }
    return dp[N];
}

int main()
{
	int t, n, m, v[105];
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		for(int i = 0; i < n; i++) cin >> v[i];
		cout << num_moedas(m, n, v) << '\n';
	}

	return 0;
}
