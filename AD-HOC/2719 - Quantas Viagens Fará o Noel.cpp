// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Quantas Viagens Fará o Noel?
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2719

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, p, x;
	cin >> t;
	while(t--)
	{
		int v = 0, i = 1;
		cin >> n >> p;
		while(n--)
		{
			cin >> x;
			v += x;
			if(v > p) i++, v = x;
		}
		cout << i << endl;
	}
	return 0;
}
