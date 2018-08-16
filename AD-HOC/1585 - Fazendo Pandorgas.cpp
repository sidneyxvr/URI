// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fazendo Pandorgas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1585

#include <iostream>

using namespace std;

int main(){
	
	int n, a, b;
	double x;
	
	cin >> n;
	while( n-- ){
		cin >> a >> b;
		x = (double)a/2 * b;
		cout << (int)x << " cm2" << endl;
	}
			
	return 0;
} 
