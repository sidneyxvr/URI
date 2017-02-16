#include <bits/stdc++.h>

using namespace std;

int main (){
	int p, n, contador = 1;
	cin >> p;
	n = p;
	p = 2;
	while(p != 1){
		p *= 2;
		if(p > n)
			p = p - (n + 1);
		contador++;
	}
	cout << contador << endl;
	return 0;
}
