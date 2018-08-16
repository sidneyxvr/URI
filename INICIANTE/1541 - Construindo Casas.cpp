// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Construindo Casas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1541

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double a,b,c,area;
	int lado;
	do{
		cin >> a;
		if(a!=0){
			cin >> b >> c;
			area=(a*b)*(100/c);
			lado=sqrt(area);
			cout << lado << endl;
		}
	}while(a!=0);

	return 0;
}
