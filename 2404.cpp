#include <bits/stdc++.h>

using namespace std;

int group[1000];

int leader(int a){
	return (group[a] == a) ? a : group[a] = leader(group[a]);
}

void join(int a, int b){
	group[leader(a)] = leader(b);
}

bool same(int a, int b){
	return leader(a) == leader(b);
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, m, a, b, p, u, w, t = 0;
	vector<pair<int, pair<int, int>>> v;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		group[i] = i;
	for(int i = 0; i < m; i++){
		cin >> a >> b >> p;
		v.push_back({p, {a, b}});
	}
	sort(v.begin(), v.end());
	for(auto h: v){
		u = h.second.first;
		w = h.second.second;
		if(!same(u, w)){
			join(u, w);
			t += h.first;
		}	
	}
	cout << t << '\n';
	
    return 0;
} 
