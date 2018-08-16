// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fechem as Portas!
// Nível: 6
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1371

#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void f()
{
	int i = 3, k = 1;
	while(k <= 25000000)
	{
		v.push_back(k);
		k += i;
		i += 2;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	f();
	int t;
	while(cin >> t and t)
	{
		int n = upper_bound(v.begin(), v.end(), t) - v.begin();
		for(int i = 0; i < n; i++)
		{
			if(i) cout << ' ';
			cout << v[i];
		}
		cout << '\n';
	}
	return 0;
}
