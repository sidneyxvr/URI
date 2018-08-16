// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Número Aproximado de Primos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2159

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

    double n;
    cin >> n;
    cout << fixed << setprecision(1) << n/log1p(n - 1) << " ";
    cout << fixed << setprecision(1) << (1.25506*(n/log1p(n - 1))) << endl;

	return 0;
}

