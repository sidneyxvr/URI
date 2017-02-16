#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	long double a, b;
	while(cin >> a >> b){
		double num = a - (int)a;
		if(num >= b) cout << (int)a + 1 << '\n';
		else cout << (int)a << '\n';
	}
	
	return 0;
}
