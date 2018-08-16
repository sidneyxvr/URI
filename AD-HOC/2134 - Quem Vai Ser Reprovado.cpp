// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Quem Vai Ser Reprovado?
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2134

#include <bits/stdc++.h>  

using namespace std; 

int main (){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, p, atual_p, x = 1;
	string nome, atual_nome;
	while(cin >> t){
		cin >> nome >> p;
		while(--t){
			cin >> atual_nome >> atual_p;
			if(atual_p < p or (atual_p == p and atual_nome > nome)){
				nome = atual_nome;
				p = atual_p;
			}
		}
		cout << "Instancia " << x++ << '\n';
		cout << nome << "\n\n";
	}


	return  0; 
}

