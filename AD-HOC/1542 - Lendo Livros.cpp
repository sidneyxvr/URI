// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Lendo Livros
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1542

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int a, b, c, d;
	while(cin >> a and a){
		cin >> b >> c;
		d = (-1)*(a*c*b)/(a-c);
		cout << d << ((d == 0 or d == 1) ? " pagina\n": " paginas\n");
	}
	return 0;
}
