// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Futebol
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1495

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, g, s, r, p , e;
	int al = 0;
	vector<int> v;
	while(cin >> n >> g){
		p = e = 0;
		for(int i = 0; i < n; i++){
			cin >> s >> r;
			if(s < r) v.push_back(r-s);
			else if(s == r){ p++; e++; }
			else p += 3;
		}
		if(g){
			if(g >= e and e){
				p += (e*2);
				g -= e;
				e = 0;
			}
			if(g < e and e){
				p += (g*2);
				g = 0;
			}
			if(g){
				sort(v.begin(), v.end());
				for(int i = 0; i < v.size(); i++){
					if(g > v[i]){
						p += 3;
						g -= (v[i] + 1);
						al++;
					}else if(g == v[i]){
						p += 1;
						break;
					}
					if(g < v[i] or !g)
						break;
				}
			}
		}
		cout << p << '\n';
		v.clear();
	}
	
	return  0; 
}
