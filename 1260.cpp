#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n;
	map<string, double> m;
	string s;
	cin >> n;
	cin.ignore();
	char k = cin.get();
	n++;
	cout << fixed << setprecision(4);
	while(n--){
		int c = 0;
		while(getline(cin, s) and s.size()){
			m[s]++;
			c++;
		}
		for(auto p: m)
			cout << p.first << ' ' << p.second/c*100 << '\n';
		m.clear();
		if(n > 1) cout << '\n';
	}

	return 0;
}
