// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: HameKameKa
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2591

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	string str;
	cin >> t;
	while(t--)
	{
		int a = 0, b = 0;
		cin >> str;
		bool fl = true;
		for(int i = 1; str[i]; i++)
		{
			if(str[i] == 'a' and fl) a++;
			if(str[i] == 'a' and !fl) b++;
			if(str[i] != 'a' and fl) fl = false;
		}
		cout << 'k';
		for(int i = 0; i < a*b; i++)
			cout << 'a';
		cout << '\n';
	}
	return 0;
}
