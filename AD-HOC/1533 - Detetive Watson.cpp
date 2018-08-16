// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Detetive Watson
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1533

#include <iostream>

using namespace std;

int main(){
	
	int n, x[100000];
	int maior, menor, posmaior, posmenor;
	
	while( (cin >> n) && n!=0 ){
		for( int i = 0 ; i < n ; i++ ){
			cin >> x[i];
			if( i == 0 ){
				maior = x[i];
				posmaior = i;
				menor = 0;
				posmenor = i;	
			}
			else if( x[i] > maior ){
				menor = maior;
				maior = x[i];
				posmenor = posmaior;
				posmaior = i;
			}
			else if( x[i] > menor && x[i] < maior ){
				menor = x[i];
				posmenor = i;
			}
		}
		cout << 1+posmenor << endl;
	}
			
	return 0;
} 
