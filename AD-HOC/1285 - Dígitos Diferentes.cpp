// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Dígitos Diferentes
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1285

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	string a, b;
	int x, y, n[10], e, r;
	while(cin >> x >> y)
	{
		e = y - x + 1, r = 0;
		while(x <= y)
		{
			memset(n, 0, sizeof(n));
			a = to_string(x);	
			for(int i = 0; i < a.size(); i++)
				n[a[i] - '0'] += 1;
			for(int i = 0; i < 10; i++)
			{
				if(n[i] > 1)
				{
					r++;
					break;
				}
			}
			x++;
		}
		cout << e - r << '\n';
	}

	return 0;
}
