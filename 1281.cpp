#include <bits/stdc++.h>

using namespace std;

main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	map<string, double> mapa;
	int m, n, p;
	string s;
	double d, sum;
	cin >> n;
	while(n--){
		sum = 0;
		mapa.clear();
		cin >> m;
		while(m--){
			cin >> s >> d;
			mapa[s] = d;		
		}
		cin >> p;
		while(p--){
			cin >> s >> m;
			sum += mapa[s] * m;
		}
		cout << fixed << setprecision(2) << "R$ " << sum << '\n';
	}
}
