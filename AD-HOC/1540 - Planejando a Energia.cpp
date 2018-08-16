// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Planejando a Energia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1540

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	long long n, a, c, k;
	long double b, d, t;
	cin >> n;
	cout << fixed << setprecision(0);
	while(n--){
		cin >> a >> b >> c >> d;
		k = ((d - b)/(c - a)*100);
		t = (k / 100.0);
		t = (t - (long long)t) * 100;
		cout << ((long long)k / 100) << ',';
		if(t == 0) 	
			cout << "00" << '\n';
		else
			cout << t << '\n';
	}
	
	return  0; 
}
