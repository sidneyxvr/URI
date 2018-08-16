// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tabelas Hash
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1256

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	vector<int> H[205];
	int t, n, m, k;
	cin >> t;
	while(t--)
	{
		for(int i = 0; i < 205; i++)
			H[i].clear();
		cin >> n >> m;
		for(int i = 0; i < m; i++)
		{
			cin >> k;
			H[k % n	].push_back(k);
		}
		for(int i = 0; i < n; i++)
		{
			int j = 0;
			cout << i << " -> ";
			while(j < H[i].size())
				cout << H[i][j] << " -> ", j++;			
			cout << "\\\n";
		}
		if(t > 0) cout << '\n';
	}
	
	return 0;
}
