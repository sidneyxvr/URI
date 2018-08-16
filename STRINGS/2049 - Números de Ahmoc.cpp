// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Números de Ahmoc
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2049

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	string a, b;
	int x = 1;
	bool flag = false;
	while(cin >> a >> b){
		if(flag) cout << '\n';
		cout << "Instancia " << x << '\n';
		if(b.find(a) != -1) cout << "verdadeira\n";
		else cout << "falsa\n";	
		flag = true;	
		x++;
	}
	
	return 0;
}
