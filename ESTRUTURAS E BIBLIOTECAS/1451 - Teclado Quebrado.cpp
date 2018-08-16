// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Teclado Quebrado
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1451

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	string str, aux, end;
	
	while(getline(cin, str))
	{
		bool fl = false;
		for(int i = 0; str[i]; i++)
		{
			if(str[i] == '[') 
			{
				fl ? end = (aux + end): end += aux;
				fl = true, aux = ""; 
			}
			else if(str[i] == ']')
			{
				fl ? end = (aux + end): end += aux;
				fl = false, aux = "";
			}
			else
			{
				aux += str[i];
			}
		}
		if(fl) end = (aux + end);
		else end += aux;
		cout << end << '\n';
		end = aux = "";
	}
	return 0;
}
