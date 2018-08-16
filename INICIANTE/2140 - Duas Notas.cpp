// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Duas Notas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2140

#include <iostream>

using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m, n){
		int c = 0;
		m = m-n;
		if( m >= 100 ){
			m -= 100;
			c++;
		}if( m >= 50 ){
			m -= 50;
			c++;
		}if( m >= 20 ){
			m -= 20;
			c++;
		}if( m >= 10 ){
			m -= 10;
			c++;
		}if( m >= 5 ){
			m -= 5;
			c++;
		}if( m >= 2 ){
			m -= 2;
			c++;
		}
		if( c == 2 && m == 0 )
			cout << "possible" << endl;
		else
			cout << "impossible" << endl;
	}
	return 0;
}
