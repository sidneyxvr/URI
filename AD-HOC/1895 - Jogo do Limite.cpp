// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Jogo do Limite
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1895

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, t, l, a = 0, b = 0, c;
	bool fl = true;
	cin >> n >> t >> l;
	while(--n){
		cin >> c;
		if(abs(t-c) <= l){
			if(fl)
				a += abs(t-c);
			else
				b += abs(t-c);
			t = c;
		}
		fl = !fl;
	}
	cout << a << ' ' << b << '\n';

	return  0; 
}
