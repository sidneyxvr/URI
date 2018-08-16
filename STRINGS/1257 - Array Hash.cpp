// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Array Hash
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1257

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	string a;
	int x, n, soma;
	
	cin >> x;
	getchar();

	while( x-- ){
		cin >> n;
		soma = 0;
		for( int i = 0 ; i < n ; i++ ){
			cin >> a;
			for( int j = 0 ; j < a.length() ; j++ ){
				soma += (a.at(j) - 65) + i + j;
			}
		}
		cout << soma << endl;
 	}
			
	return 0;
} 
