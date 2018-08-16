// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tudo o que Você Precisa é...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1307

#include <bits/stdc++.h>

using namespace std;

int to_decimal(string a)
{
	int k = 0;
	for(int i = a.size() - 1; i > -1; i--)
		k += (a[i] - '0') * pow(2, a.size() - (i + 1));
	return k;
}

int main()
{
	int t, x = 1;
	string a, b;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		int p = to_decimal(a), q = to_decimal(b);
		if(__gcd(p, q) == 1) cout << "Pair #" << x++ << ": Love is not all you need!\n";
		else cout << "Pair #" << x++ << ": All you need is love!\n";
	}

	return 0;
}
