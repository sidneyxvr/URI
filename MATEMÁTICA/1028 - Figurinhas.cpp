// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Figurinhas
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1028

#include <bits/stdc++.h>

using namespace std;

int main(){

		int n1, n2, resto, caso, aux;
		
		cin >> caso;
		
		while(caso--){
			cin >> n1 >> n2;
			
			if(n1>n2){
				aux = n1;
				n1 = n2;
				n2 = aux;
			}
				
			while(n2!=0){
				resto = n1%n2;         
				n1    = n2;
				n2    = resto;
			}
			
			cout << n1 << endl;
		}
	return 0;
}
