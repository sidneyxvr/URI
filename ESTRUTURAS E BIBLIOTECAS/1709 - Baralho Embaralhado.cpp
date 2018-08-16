// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Baralho Embaralhado
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1709

#include <iostream>

using namespace std;

int main (){
	int p,n,contador=1;
	cin >> p;
	n=p;
	p=2;
	while(p!=1){
		p*=2;
		if(p>n)
			p=p-(n+1);
		contador++;
	}
	cout << contador << endl;
	return 0;
}
