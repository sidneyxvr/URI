// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Colisão
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1618

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, ax, ay, bx, by, cx, cy, dx, dy, rx ,ry;
	cin >> n;
	while(n--){
		cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
		if(rx >= dx and rx <= cx and rx >= ax and rx <= bx and
		   ry <= dy and ry <= cy and ry >= ay and ry >= by)
			cout << "1\n";
		else
			cout << "0\n";
	}
	
    return 0;
}
