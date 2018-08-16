// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Parafusos e Porcas
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1520

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, a, b, q;
	vector<int> v;
	while(cin >> n)
	{
		while(n--)
		{
			cin >> a >> b;
			for(int i = a; i <= b; i++)
				v.push_back(i);
		}
		sort(v.begin(), v.end());
		cin >> a;
		b = lower_bound(v.begin(), v.end(), a) - v.begin();
		n = upper_bound(v.begin(), v.end(), a) - v.begin();
		if(v[b] != a)
			cout << a << " not found\n";
		else
			cout << a << " found from " << b << " to " << n - 1 << '\n';
		v.clear();
	}

	return 0;
}
