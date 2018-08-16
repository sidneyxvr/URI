// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Comércio de Vinhos na Ger...
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1661

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int v[100005];
	while(cin >> n and n)
	{
		for(int i = 0; i < n; i++) cin >> v[i];
		uint64_t k = 0;
		for(int i = 0; i < n - 1; i++)
		{
			v[i + 1] += v[i];
			k += abs(v[i]);
		}
		cout << k << '\n';
	}

	return 0;
}
