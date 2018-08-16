// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Cola
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2530

#include <bits/stdc++.h>

using namespace std;

int v1[100005], v2[100005];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n, m;
	while(cin >> n >> m)
	{
		for(int i = 0; i < n; i++) cin >> v1[i];
		for(int i = 0; i < m; i++) cin >> v2[i];
		int k = 0;
		for(int i = 0; i < n; i++)
			if(v1[i] == v2[k]) 
				k++;
		cout << (k == m ? "sim\n": "nao\n");
	}
	return 0;
}
