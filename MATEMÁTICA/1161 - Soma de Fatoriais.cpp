// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Soma de Fatoriais
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1161

#include <bits/stdc++.h>

using namespace std;


int main(){

	long long m, n, a = 1, b = 1;

	while(cin >> m >> n){
		a=b=1;
		for(int i=m;i>1;i--)
			a*=i;
		for(int i=n;i>1;i--)
			b*=i;
		cout << a + b << endl;

	}	
	
	return 0;
}
