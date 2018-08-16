// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Coloração de Cenários de ...
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1907

#include <bits/stdc++.h>
using namespace std;

int k, n, m;
char G[1030][1030];

void ff(int x, int y)
{
	if(x < 0 or x >= n or y < 0 or y >= m)	
		return;
	if(G[x][y] == 'o')
		return;
	G[x][y] = 'o';
	ff(x, y + 1);
	ff(x, y - 1);
	ff(x + 1, y);
	ff(x - 1, y);
}
 
int main() 
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> G[i][j];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(G[i][j] == '.')
				k++, ff(i, j);
	cout << k << '\n';
	
	return 0;
}
