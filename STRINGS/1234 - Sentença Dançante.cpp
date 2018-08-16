// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sentença Dançante
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1234

#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	bool b;
	
	while( getline( cin , s ) ){
		b = false;
		for( int i = 0 ; i < s.length() ; i++ ){
			if( isalpha(s[i]) && b == true ){
				b = false;
				s[i] = tolower(s[i]);
			}
			else if( isalpha(s[i]) && b == false ){
				b = true;
				s[i] = toupper(s[i]);
			}
		}
		cout << s << endl;
	}

	return 0;
}
