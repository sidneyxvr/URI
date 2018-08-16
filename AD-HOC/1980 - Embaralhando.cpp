// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Embaralhando
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1980

#include <bits/stdc++.h>

using namespace std;

int main(){	

	string n;

	while((cin >> n) && n[0] != '0'){
		long long fatorial = 1;
		for( int i = n.length() ; i > 1 ; i--)
			fatorial*=i;
		cout << fatorial << endl;
	}	
	
	return 0;
}
