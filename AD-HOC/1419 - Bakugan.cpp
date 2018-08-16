// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Bakugan
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1419

#include <bits/stdc++.h>  

using namespace std; 

bool f(int a, int b){
	return a > b;
}

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, m[11], l[11], pm[3], pl[3], tm, tl;
	bool me, le;
	while(cin >> n and n){
		me = le = false;
		tm = tl = 0;
		for(int i = 0; i < n; i++){
			cin >> m[i];
			tm += m[i];
			if(i < 3)
				pm[i] = m[i];
		}for(int i = 0; i < n; i++){
			cin >> l[i];
			tl += l[i];
			if(i < 3)
				pl[i] = l[i];
		}
		for(int i = 1; i < (n - 1); i++){
			if(m[i - 1] == m[i] and m[i] == m[i + 1])
				me = true;
			if(l[i - 1] == l[i] and l[i] == l[i + 1])
				le = true;
			if(me or le)
				break;
		}
		if(me)
			tm += 30;
		if(le)
			tl += 30;
		cout << (tm > tl ? 'M' : (tm < tl ? 'L' : 'T')) << '\n';
	}
	
	return  0; 
}
