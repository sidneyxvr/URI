// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Polícia e Ladrão
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1905

#include <bits/stdc++.h>

using namespace std;

int G[5][5];

void floodfill(int x, int y)
{
	if(x < 0 or x > 4 or y < 0 or y > 4)
		return;
	if(G[x][y] != 0)
		return;
	else
		G[x][y] = -1;
	floodfill(x + 1, y);
	floodfill(x, y + 1);
	floodfill(x - 1, y);
	floodfill(x, y - 1);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		for(int i = 0; i < 5; i++)
			for(int j = 0; j < 5; j++)
				cin >> G[i][j];
		floodfill(0, 0);
		cout << (G[4][4] == 0? "ROBBERS\n": "COPS\n");
	}
	return 0;
}
