// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Enigma do Pronalândia
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1984

#include <iostream>

using namespace std;

int main(){
	long long num, num2;
	cin >> num;
	do{
		num2=num%10;
		cout << num2;
		num/=10;
	}while(num!=0);
	cout << endl;
	return 0;
}
