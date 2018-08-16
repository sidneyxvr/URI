// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ele Está Impedido!
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1410

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int a, d;
	int A[15], D[15];
	while(cin >> a >> d and (a + d))
	{
		for(int i = 0; i < a; i++) cin >> A[i];
		for(int i = 0; i < d; i++) cin >> D[i];
		sort(A, A + a);
		sort(D, D + d);
		cout << (D[1] <= A[0] ? "N\n": "Y\n");
	}

	return  0; 
}
