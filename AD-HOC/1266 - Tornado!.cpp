// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tornado!
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1266

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, v[5005], p, k, i;	
	while(cin >> t and t)
	{
		for(int i = 0; i < t; i++) cin >> v[i];
		int j = 0;
		while(v[j] != 1 and j < t)
		{
			j++;
		}
		k = 0;
		for(int i = j; i < t + j; i++)
		{
			if(v[i % t] == 0 and v[(i - 1) % t] == 0)
				v[i % t] = 1, k++;
		}
		cout << k << '\n';
	}
		
    return 0;
}
