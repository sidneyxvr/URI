// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fibonacci Rápido
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2164

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double fibo( int n ){
	double fib;
	fib = pow((1 + sqrt(5)) , n );
	fib -= pow((1 - sqrt(5)) , n );
	fib /= pow(2 , n) * sqrt(5);
	return fib;
}

int main (){

    int n;
    cin >> n;
    cout << fixed << setprecision(1) << (double)fibo(n) << endl;

	return 0;
}
