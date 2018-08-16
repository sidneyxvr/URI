// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Mapa do Meistre
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1855

#include <bits/stdc++.h>

using namespace std;

int x, y, n, m, fl;
char p;
string v[105];
map<char, pair<int, int>> mp;

void f()
{
	if(x < 0 or x >= m or y < 0 or y >= n)
		fl = 1;
	else if(v[x][y] == '#')
		fl = 1;
	else if(v[x][y] != '.' and v[x][y] != '*')
		p = v[x][y], v[x][y] = '#';
	else if(v[x][y] == '*')
		fl = 2;
	if(!fl) x += mp[p].first, y += mp[p].second;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	mp['>'] = {0, 1};
	mp['v'] = {1, 0};
	mp['<'] = {0, -1};
	mp['^'] = {-1, 0};
	cin >> n >> m;//n - coluna
	for(int i = 0; i < m; i++)
		cin >> v[i];
		
	p = v[0][0];
	while(!fl)
	{
		f();
	}
	cout << (fl == 2 ? "*\n": "!\n");
    return 0;
}
