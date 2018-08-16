// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ajude!
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1367

#include <iostream>

using namespace std;

int main(){
	
	int n, valor;
	char l;
	string str;
	while( cin >> n, n){
		int c = 0, tempo = 0;
		int v[26] = {0};
		bool t[26] = {false};
		while(n--){
			cin >> l >> valor >> str;
			if( str == "correct" ){
				if( !t[l-65] ){
					if( v[l-65] > 0 )
						tempo += 20*v[l-65];
					c++;
					tempo += valor;
				}
			}else
				v[l-65] += 1;
		}
		cout << c << " " << tempo << endl;
	}

	return 0;
}
