// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Concurso de Contos
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1222

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n, l, c;
	string str[1005];
	while(cin >> n >> l >> c)
	{
		for(int i = 0; i < n; i++)
			cin >> str[i];
		int j = 0, k = 0;
		for(int i = 0; i < n; i++)
		{	
			if(j + str[i].size() <= c)
				j += str[i].size() + 1;
			else
				j = str[i].size() + 1, k++;
		}
		if(j > 0) k++;
		cout << (k % l == 0? k / l: (k / l) + 1) << '\n';
	}

	return 0;
}
