// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Marianne e os Primos Gêmeos
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1926

#include <bits/stdc++.h>

using namespace std;

bool crivo[1000005];
vector <int> v, r;

void prime()
{
	for(int i = 2; i < 1000002; i++)
	{
		if(!crivo[i])
		{
			v.push_back(i);
			for(int j = 2; (i * j) < 1000002; j++)
				crivo[(i * j)] = 1;
		}

	}
	for(int i = 0; i < v.size(); i++)
	{
		if(i < v.size() - 1)
		{
			if(abs(v[i] - v[i+1]) == 2)
			{
				if(r.size() == 0 or r[r.size() - 1] != v[i])
					r.push_back(v[i]);
			}
		}
		if(i > 0)
		{
			if(abs(v[i] - v[i-1]) == 2)
			{
				if(r.size() == 0 or r[r.size() - 1] != v[i])
					r.push_back(v[i]);
			}
		}
	}
}

int main()
{
	prime();	
	int t, a, b, k;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		if(a > b)
			swap(a, b);
		auto p1 = lower_bound(r.begin(), r.end(), a);
		auto p2 = upper_bound(r.begin(), r.end(), b);
		k = p1 - p2;
		cout << abs(k) << '\n';
	}

	return 0;
}
