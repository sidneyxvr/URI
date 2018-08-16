// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Processador Amigável de I...
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1287

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	string str;
	while(getline(cin, str))
	{
		bool fl = false;
		for(int i = 0; i < str.size() and !fl; i++)
		{
			if(str[i] == 'o' or str[i] == 'O')
				str[i] = '0';
			else if(str[i] == 'l')
				str[i] = '1';
			else if(str[i] == ' ' or str[i] == ',')
				str.erase(str.begin() + i), i--;
			else if(str[i] < '0' or str[i] > '9')
				fl = true;
		}
		while(str.front() == '0' and str.front() != str[str.size() - 1])
			str.erase(str.begin());
		if(fl or str == "" or str.size() > 10) cout << "error\n";
		else
		{
			long long k = stoll(str);
			if(k > 2147483647) cout << "error\n";
			else cout << k << '\n';
		}
	}
		
	return 0;
}
