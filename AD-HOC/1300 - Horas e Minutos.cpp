// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Horas e Minutos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1300

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int t;
	while(cin >> t)
		cout << (t%6 ? "N\n" : "Y\n");
		
	return 0;
}
