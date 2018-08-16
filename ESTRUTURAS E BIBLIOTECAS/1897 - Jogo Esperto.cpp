// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Jogo Esperto
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1897

#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	
	int a, b, ans = 0;
	cin >> a >> b;
	queue<pair<int, int>> fila;
	set<int> st;
	fila.push({a, 0});
	while(!ans)
	{
		pair<int, int> r = fila.front(); 
		fila.pop();
		
		if(st.find(r.x) == st.end())
		{
			if(r.x * 2 == b or r.x * 3 == b or r.x / 2 == b or r.x / 3 == b
			or r.x + 7 == b or r.x - 7 == b)
				ans = r.y + 1;
			fila.push({r.x * 2, r.y + 1});
			fila.push({r.x * 3, r.y + 1});
			fila.push({r.x / 2, r.y + 1});
			fila.push({r.x / 3, r.y + 1});
			fila.push({r.x + 7, r.y + 1});
			fila.push({r.x - 7, r.y + 1});
			st.insert(r.x);
		}
	}
	cout << ans << '\n';
	return 0;
}
