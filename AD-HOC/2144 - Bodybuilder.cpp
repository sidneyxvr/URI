// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Bodybuilder
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2144

#include <iostream>

using namespace std;

int main(){

	int a, b, c, i = 0;
	double s = 0;
	while((cin >> a >> b >> c),a || b || c){
		double w1 ,w2;
		w1 = a*(1+(c/30.0));
		w2 = b*(1+(c/30.0));
		s += (w1 + w2);
		i++;
		double w = (w1 + w2)/2;
		if( w >= 1 && w < 13 )
			cout << "Nao vai da nao" << endl;
		else if( w >= 13 && w < 14 )
			cout << "E 13" << endl;
		else if( w >= 14 && w < 40 )
			cout << "Bora, hora do show! BIIR!" << endl;
		else if( w >= 40 && w <= 60 )
			cout << "Ta saindo da jaula o monstro!" << endl;
		else
			cout << "AQUI E BODYBUILDER!!" << endl;
	}
	if( s/i > 40 )
		cout << "\nAqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;
	
	return 0;
}
