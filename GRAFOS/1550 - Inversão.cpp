// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Inversão
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1550

#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t, a, b, ans, k;
	pair<int, int> r;
	queue<pair<int, int>> fila;
	set<int> st;
	string aux;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;	
		fila.push({a, 0});
		ans = 0;
		while(!ans)
		{
			r = fila.front();
			fila.pop();
			if(st.find(r.x) == st.end())
			{				
				fila.push({r.x + 1, r.y + 1});
				aux = to_string(r.x);
				reverse(aux.begin(), aux.end());
				k = stoi(aux);
				fila.push({k, r.y + 1});
				if(r.x + 1 == b or k == b)
					ans = r.y + 1;
				st.insert(r.x);
			}		
		}
		cout << ans << '\n';
		st = set<int>();
		fila = queue<pair<int, int>>();
	}

	return 0;
}
