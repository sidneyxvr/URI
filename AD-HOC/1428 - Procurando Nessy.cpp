// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Procurando Nessy
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1428

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, a, b;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		cout << int((double)(a / 3) + 0.5) * int((double)(b / 3) + 0.5) << '\n';
	}
	
    return 0;
}
