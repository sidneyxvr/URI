// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pontos de Feno
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1261

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, n;
	long long v;
	string str;
	while(cin >> t >> n)
	{
		map<string, int> m;
		while(t--)
		{
			cin >> str >> v;
			m[str] = v;
		}
		cin.ignore();
		v = 0;
		while(n)
		{
			getline(cin, str);
			string aux;
			if(str == ".") n--, cout << v << '\n', v = 0;
			else
			{
				for(char c: str)
				{
					if(c == ' ')
					{
						v += (m[aux] * 1LL);
						aux = "";
					}
					else
					{
						aux += c;
					}
				}
				v += (m[aux]* 1LL);
			}
		}
	}
	return 0;
}
