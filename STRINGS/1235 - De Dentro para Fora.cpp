// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: De Dentro para Fora
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1235

#include <bits/stdc++.h>

using namespace std;

int main(){

	string n;
	string p;
	int x, d, j;

	cin >> x;
	getchar();
	while( x-- ){
		getline( cin , n );
		if( ( n.length() % 2 ) != 0 )
			d = n.length() / 2;
		else
			d = ( n.length() / 2 ) - 1;
		j = 0;
		p = n;
		int aux = d+1;
		for ( int i = d ; i >= 0 ; i-- ) {
			p.at(j) = n.at(i);
			j++;	
		}
		j = aux;
		for( int i = n.length()-1 ; i >= aux ; i-- ){
			p.at(j) = n.at(i);
			j++;		
		}
		cout << p << endl;
			
	}

	return 0;
}
