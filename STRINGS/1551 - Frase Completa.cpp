// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Frase Completa
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1551

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	int alpha[26];
	int x, soma;
	string a;
	
	cin >> x;
	getchar();
	while( x-- ){
		soma = 0;
		for( int i = 0 ; i < 26 ; i++ )
			alpha[i] = 0;
		getline( cin , a );
		for( int i = 0 ; i < a.length() ; i++ ){
			if( isalpha(a.at(i)) ){
				alpha[a.at(i)-97] = 1;
			}
		}
		for( int i = 0 ; i < 26 ; i++ )
			soma += alpha[i];
		if( soma < 13 )
			cout << "frase mal elaborada" << endl;
		else if( soma >= 13 && soma < 26)
			cout << "frase quase completa" << endl;
		else
			cout << "frase completa" << endl;
	}
			
	return 0;
} 
