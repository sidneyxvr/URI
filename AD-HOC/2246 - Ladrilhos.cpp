// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ladrilhos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2246

#include <bits/stdc++.h>

using namespace std;

int M, N, c;
int G[255][255];

void floodfill(int x, int y, int old)
{
	if(x < 0 or x >= N or y < 0 or y >= M)
		return;
	if(G[x][y] != old)
		return;
	else
		G[x][y] = -1;
	floodfill(x, y + 1, old);
	floodfill(x, y - 1, old);
	floodfill(x + 1, y, old);
	floodfill(x - 1, y, old);
	c++;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int mn = 1 << 30;
	cin >> N >> M;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			cin >> G[i][j];
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			if(G[i][j] != -1)
			{
				c = 0;
				floodfill(i, j, G[i][j]);
				mn = min(c, mn);
			}
	cout << mn << '\n';
	return 0;
}

