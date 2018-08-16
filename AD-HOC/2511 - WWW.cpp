// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: WWW
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2511

#include <bits/stdc++.h>

using namespace std;

int sieve[1000006];

void prime()
{
	sieve[0] = sieve[1] = 1;
	for(int x = 2; x < 1000006; x++) 
	{
		if (sieve[x]) continue;
		for (int u = 2*x; u < 1000006; u += x)
			sieve[u] = x;
	}
}

int main()
{
	prime();
	int n, a;
	vector<int> v;
	while(~scanf("%d", &n))
	{
		for(int i = 0; i < n; i++) 
		{
			scanf("%d", &a);
			if(!sieve[a]) v.push_back(a);
		}
		if(v.size())
		{
			for(int i = 0; i < v.size() - 1; i++)
				cout << v[i] << ' ';
			cout << v.back() << '\n';
		}
		else
		{
			cout << "*\n";
		}
		v.clear();
	}

	return 0;
}
