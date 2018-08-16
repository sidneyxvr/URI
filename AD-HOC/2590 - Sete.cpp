// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sete
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2590

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int k = n % 4;
		cout << (k == 0? 1: k == 1 ? 7: k == 2 ? 9: 3) << '\n';
	}
	return 0;
}
