#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, i;
	double c;
	cin >> n;
	while(n--){
		cin >> c;
		i = 0;
		while(c > 1){
			c = c / 2;
			i++;
		}
		cout << i << " dias" << endl;
	}
	
	return 0;
}
