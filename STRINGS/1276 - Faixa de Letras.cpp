// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Faixa de Letras
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1276

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string s;
	int v[27];
	while(getline(cin, s)){
		bool b = false, k = false;
		memset(v, 0, sizeof v);
		for(int i = 0; i < s.size(); i++)
			v[s[i] - 'a'] = 1;
		for(int i = 0; i < 26; i++){
			if(v[i] != 0 && !b){
				if(k)
					cout << ", ";
				k = true;					
				cout << (char)(i + 'a');
				b = true;
			}
			if(v[i+1] == 0 && b){
				cout << ':' << (char)(i + 'a');
				b = false;
			}
		}
		cout << '\n';
	}

	return 0;
}
