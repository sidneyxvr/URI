// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Painel de Posições
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1375

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int t, a, b;
	pair<int, int> car[1009];
	while(cin >> t and t)
	{
		int k = 0;
		for(int i = 0; i < t; i++)
		{
			cin >> a >> b;
			k += b;
			car[i] = {b + i, a};
		}
		sort(car, car + t);
		bool fl = true;
		for(int i = 1; i < t and fl; i++)
			if(car[i].first != car[i - 1].first + 1)
				fl = false;
		if(k) fl = false;
		if(fl)
		{
			for(int i = 0; i < t; i++)
			{
				if(i) cout << ' ';
				cout << car[i].second;
			}
			cout << '\n';
		}
		else
		{
			cout << "-1\n";
		}
	}		
    return 0;
}
