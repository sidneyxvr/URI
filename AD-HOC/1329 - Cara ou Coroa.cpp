// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Cara ou Coroa
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1329

#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b, mary, john;
	
	while( (cin >> a) && a != 0 ){
		mary = 0;
		john = 0;
		while( a-- ){
			cin >> b;
			if( b == 0 )
				mary += 1;
			else
				john += 1;
		}
		cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
	}
	
	return 0;
}
