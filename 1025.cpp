#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, q, a, x = 1;
	vector<int> v;
	while(cin >> n >> q and n){
		while(n--){
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		cout << "CASE# " << x << ":\n";
		while(q--){
			cin >> a;
			auto lb = lower_bound(v.begin(), v.end(), a);
			if(v[lb-v.begin()] == a)
				cout << a << " found at " << (lb - v.begin() + 1) << '\n';
			else
				cout << a << " not found\n";
		}
		x++;
		v.clear();
	}

	return 0;
}
