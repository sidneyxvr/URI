// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Problema Fácil de Rujia Liu?
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1424

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, m, a, b;
	map<int, vector<int>> mapa;
	while(cin >> n >> m)
	{
		for(int i = 1; i <= n; i++)
		{
			cin >> a;
			mapa[a].push_back(i);
		}
		while(m--)
		{
			cin >> a >> b;
			//cout << mapa[b].size() << '\n';
			if(mapa[b].size() < a)
				cout << 0 << '\n';
			else
				cout << mapa[b][a - 1] << '\n';
		}
		mapa.clear();
	}
	
	return 0;
}
