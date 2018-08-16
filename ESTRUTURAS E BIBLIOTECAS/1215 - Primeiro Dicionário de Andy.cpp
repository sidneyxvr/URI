// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Primeiro Dicionário de Andy
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1215

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	string str, aux;
	set<string> st;
	while(getline(cin, str))
	{
		aux = "";
		for(int i = 0; i < str.size(); i++)
		{
			if(isalpha(str[i]))
			{
				aux += (str[i] |= ' ');
			}
			else if(aux.size())
			{
				st.insert(aux);
				aux = "";
			}
		}
		if(aux.size())
		{
			st.insert(aux);
			aux = "";
		}
	}
	for(string s: st)
		cout << s << '\n';
    return 0;
}
