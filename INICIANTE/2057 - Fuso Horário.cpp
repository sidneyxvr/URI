// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fuso Horário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2057

#include <iostream>

using namespace std;

int main(){

	int a, b, c, s = 0;
	cin >> a >> b >> c;
	s = a + b + c;
	if( s > 24 )
		s -= 24;
	if( s < 0 )
		s+= 24;
	cout << s << endl;

	return(0);
}
