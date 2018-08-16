// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Etiquetas de Noel
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2482

#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<string, string> mp;
	int n;
	string a, b, c;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		getline(cin, a);
		getline(cin, b);
		mp[a] = b;
	}
	cin >> n;
	cin.ignore();
	while(n--)
	{
		getline(cin, a);
		getline(cin, b);
		cout << a << '\n' << mp[b] << "\n\n";
	}
	
	return 0;
}
