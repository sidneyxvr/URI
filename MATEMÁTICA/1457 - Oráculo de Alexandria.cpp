// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Oráculo de Alexandria
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1457

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	string str;
	cin >> t;
	while(t--)
	{
		cin >> str;
		int k = 0;
		while(str.back() == '!')
			str.pop_back(), k++;
		long long n = stoll(str);
		for(int i = n - k; i > 1; i -= k)
			n *= i;
		cout << n << '\n';
	}

	return 0;
}
