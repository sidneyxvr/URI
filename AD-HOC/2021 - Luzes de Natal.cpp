// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Luzes de Natal
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2021

#include <iostream>

using namespace std;

int main(){
	int a, b, c, l; 
	while((cin >> a >> b >> c) && a!=0 || b!=0 || c!=0){
		b+=1;
		l=0;
		while(c--){
			int d;
			cin >> d;
			if(d%(b-1)==0)
				l+=1;
			else if(d>b){
				d=d%(b-1);
				l+=b-d;
			}
			else
				l+=b-d;
		}
		cout << "Lights: " << l << endl;
	}
	return 0;
}
