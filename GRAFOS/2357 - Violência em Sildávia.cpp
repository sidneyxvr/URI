// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Violência em Sildávia
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2357

#include <bits/stdc++.h>

using namespace std;

int group[100005];

int leader(int a)
{
	return (group[a] == a? a: group[a] = leader(group[a]));
}

void join(int a, int b)
{
	group[leader(a)] = leader(b);
}

bool same(int a, int b)
{
	return (leader(a) == leader(b));
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n, m, a, b;
	bool fl;
	while(cin >> n >> m)
	{
		for(int i = 1; i <= n; i++)
			group[i] = i;
		fl = false;
		for(int i = 0; i < m; i++)
		{
			cin >> a >> b;
			if(!same(a, b))
				join(a, b);
			else
				fl = true;
		}
		cout << (fl ? "Inseguro": "Seguro") << '\n';
	}
	return 0;
}
