#include <bits/stdc++.h>

using namespace std;

int main(){

	int v[1001], n, m, c;
	double r, media, soma;
	
	cin >> n;
	while(n--){
		r = c = soma =0;
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> v[i];
			soma += v[i];
		}
		media = soma / m;
		for(int i = 0; i < m; i++){
			if(v[i] > media)
				c++;
		}
		r=(c*100.00)/m;
		cout << fixed << setprecision(3) << r << "%" << endl;
	}

	return 0;
}
