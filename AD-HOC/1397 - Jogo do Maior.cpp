// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Jogo do Maior
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1397

#include <iostream>

using namespace std;

int main(){
	
	int a, b, n, p, s;
	
	while( (cin >> n) && n!=0 ){
		p = 0;
		s = 0;
		while( n-- ){
			cin >> a >> b;
			if( a > b )
				p++;
			if( a < b )
				s++;
		}
		cout << p << " " << s << endl;
	}
	
			
	return 0;
} 
