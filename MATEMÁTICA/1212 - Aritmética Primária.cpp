// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Aritmética Primária
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1212

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
	while(cin >> a >> b and (a != "0" or b != "0"))
	{
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		a.push_back('0'), b.push_back('0');
		int k = 0;
		for(int i = 0; i < min(a.size(), b.size()); i++)
		{
			if((a[i] - '0') + (b[i] - '0') > 9)
				a[i + 1] += ((a[i] - '0') + (b[i] - '0')) / 10, k++;
		}
		if(k == 0) cout << "No carry operation.\n";
		else if(k == 1) cout << "1 carry operation.\n";
		else cout << k << " carry operations.\n";
	}

	return 0;
}

