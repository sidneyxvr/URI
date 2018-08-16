// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: TDA Racional
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1022

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(){

	int a, b, c, d, num, den, n, div;
	char o;
	scanf("%d",&n);
	while(n--){
		scanf("%d / %d %c %d / %d",&a,&b,&o,&c,&d);
		den = b*d;
		if(o == '+'){
			num = (d*a)+(b*c);
		}else if(o == '-'){
			num = (d*a)-(b*c);
		}else if(o == '*'){
			num = a*c;
		}else{
			num = a*d;
			den = b*c;
		}
		div = abs(gcd(num, den));
		printf("%d/%d = %d/%d\n",num, den, num/div, den/div);
		
	}
	return 0;
}
