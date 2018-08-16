// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Qual o Mais Rápido?
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2175

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	double a, b, c;
	cin >> a >> b >> c;
	if(a < b and a < c)
		cout << "Otavio\n";
	else if(b < a and b < c)
		cout << "Bruno\n";
	else if(c < a and c < b)
		cout << "Ian\n";
	else
		cout << "Empate\n";
	
	return  0; 
}
