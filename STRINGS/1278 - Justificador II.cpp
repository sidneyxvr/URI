// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Justificador II
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1278

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, mx;
	string s[105], aux;
	bool fl, ln = false;
	while(cin >> n and n)
	{
		if(ln) cout << '\n';
		ln = true;
		cin.ignore();
		for(int i = 0; i < n; i++)
		{
			fl = false;
			getline(cin, s[i]);
			while(s[i][s[i].size() - 1] == ' ')
				s[i].pop_back();
			for(int j = 0; j < s[i].size(); j++)
			{
				
				if(isalpha(s[i][j]))
				{
					aux.push_back(s[i][j]);
					fl = true;
				}
				else if(isspace(s[i][j]) and fl)
				{
					aux.push_back(' ');
					fl = false;
				}
			}
			s[i] = aux;
			aux.clear();	
		}
		mx = 0;
		for(int i = 0; i < n; i++)
			mx = max(mx, (int)s[i].size());
		for(int i = 0; i < n; i++)
			cout << setw(mx) << s[i] << '\n';
	}

	return  0; 
}
