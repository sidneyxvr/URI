// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Reservatório de Mel
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2029

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double v,d,h,a;

	while( cin >> v >> d ){
		h = v/(((d/2)*(d/2))*3.14);
		a = ((d/2)*(d/2))*3.14;
		cout << fixed << setprecision(2) << "ALTURA = " << h << endl;
		cout << fixed << setprecision(2) << "AREA = " << a << endl;
	}

	return 0;
}
