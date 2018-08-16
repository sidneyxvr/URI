// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ajude Clotilde
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1910

#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	set<int	> st;
	queue<pair<int, int>> fila;
	pair<int, int> r;
	map<int, bool> m;
	int a, b, c, n, ans;
	while(cin >> a >> b >> n and (a + b + n))
	{
		while(n--)
		{
			cin >> c;
			m[c] = true;
		}
		ans = -1;
		fila.push({a, 0});
		while(!fila.empty() and ans == -1)
		{
			r = fila.front();
			fila.pop();
			if(r.x == b)
			{
				ans = r.y;
				continue;
			}
			if(m.find(r.x) == m.end() and st.find(r.x) == st.end())
			{
				if(r.x - 1 > 0)
					fila.push({r.x - 1, r.y + 1});
				if(r.x + 1 <= 100000)
					fila.push({r.x + 1, r.y + 1});
				if(!(r.x % 2))
					fila.push({r.x / 2, r.y + 1});
				if(r.x * 2 <= 100000)
					fila.push({r.x * 2, r.y + 1});
				if(r.x * 3 <= 100000)
					fila.push({r.x * 3, r.y + 1});
				st.insert(r.x);
			}		
		}
		cout << ans << '\n';
		m = map<int, bool>();
		fila = queue<pair<int, int>>();
		st = set<int>();
	}

	return 0;
}
