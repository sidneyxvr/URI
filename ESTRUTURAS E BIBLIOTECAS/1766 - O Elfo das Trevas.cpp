// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Elfo das Trevas
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1766

#include <bits/stdc++.h>

using namespace std;

struct Rena
{
	string str;
	int p, i;
	double a;
	bool operator < (const Rena r) const
	{
		if(p > r.p) return true;
		else if(p == r.p)
		{
			if(i < r.i) return true;
			else if(i == r.i)
			{
				if(a < r.a) return true;
				else if(a == r.a)
				{
					if(str < r.str) return true;
					return false;
				}
				return false;
			}
			return false;
		}
		return false;
	}
};

int main()
{
	vector<Rena> v;
	int t, n, m, x = 1;
	cin >> t;
	while(t--)
	{
		Rena r;
		cin >> n >> m;
		while(n--)
		{
			cin >> r.str >> r.p >> r.i >> r.a;
			v.push_back(r);
		}
		sort(v.begin(), v.end());
		cout << "CENARIO {" << x++ << "}\n";
		for(int i = 0; i < m; i++)
			cout << i + 1 << " - " << v[i].str << '\n';
		v.clear();
	}	

	return 0;
}
