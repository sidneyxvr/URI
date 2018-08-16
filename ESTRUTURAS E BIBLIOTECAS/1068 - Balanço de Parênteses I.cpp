// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Balanço de Parênteses I
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1068

#include <iostream>

using namespace std;

int main(){
	
	string n;
	int e,d;
	bool a;
	
	while( getline( cin , n ) ){
		a = false;
		e = 0;
		d = 0;
		for( int i = 0 ; i < n.length() ; i++ ){
			if( n[i] == '(' )
				e += 1;
			else if( n[i] == ')' )
				d += 1;
			if( d > e  ){
				a = true;
				break;
			}
				
		}
		if( !a && d==e )
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;
	}			
	return 0;
}
