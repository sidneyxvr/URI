// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pedra, Papel, Ataque Aéreo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2031

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x;
	string a, b;
	
	cin >> x;
	
	while( x-- ){
		cin >> a >> b;
		if( a == b && b == "papel" )
			cout << "Ambos venceram" << endl;
		else if( a == b && b == "pedra" )
			cout << "Sem ganhador" << endl;
		else if( a == b && b == "ataque" )
			cout << "Aniquilacao mutua" << endl;
		else if( a == "ataque" && b == "pedra" )
			cout << "Jogador 1 venceu" << endl;
		else if( a == "pedra" && b == "ataque" )
			cout << "Jogador 2 venceu" << endl;
		else if( a == "pedra" && b == "papel" )
			cout << "Jogador 1 venceu" << endl;
		else if( a == "papel" && b == "pedra" )
			cout << "Jogador 2 venceu" << endl;
		else if( a == "papel" && b == "ataque" )
			cout << "Jogador 2 venceu" << endl;
		else if( a == "ataque" && b == "papel" )
			cout << "Jogador 1 venceu" << endl;
	}
			
	return 0;
} 
