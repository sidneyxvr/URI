// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Chefe
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1469

#include <bits/stdc++.h>

using namespace std;

int age[505], mn;
vector<int> G[505];
int cor[505];

void dfs(int v, int pr)
{
	if(v != pr)
		mn = min(mn, age[v]);
	cor[v] = 1;
	for(int p: G[v])
		if(cor[p] == 0)
			dfs(p, pr);
}

int main()
{
	int v, e, n, a, b;
	while(cin >> v >> e >> n)
	{
		for(int i = 1; i <= v; i++)
		{
			cin >> age[i];
			G[i].clear();
		}
		while(e--)
		{
			cin >> a >> b;
			G[b].push_back(a);
		}
		char c;
		while(n--)
		{
			cin >> c;
			if(c == 'P')
			{
				cin >> a;
				memset(cor, 0, sizeof(cor));
				mn = 0x3f3f3f3f;
				dfs(a, a);
				if(mn == 0x3f3f3f3f) cout << "*\n";
				else cout << mn << '\n';
			}
			else
			{
				cin >> a >> b;
				swap(G[a], G[b]);
				for(int i = 1; i <= v; i++)
					for(int &p: G[i])
						if(p == a) p = b;
						else if(p == b) p = a;
			}		
		}
	}
	
    return 0;
}
