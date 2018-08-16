// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: A Lenda de Flavious Josephus
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1030

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, q, x = 1;
	cin >> q;
	vector<int> v;
	while(q--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
			v.push_back(i);
		int c = 0;
		while(n > 1)
		{
			c = (c + k - 1) % v.size();
			v.erase(v.begin() + c);
			n--;
		}
		cout << "Case " << x++ << ": " << v[0] << '\n';
		v.clear();
	}
	return 0;
}
