#include <bits/stdc++.h>

using namespace std;

int group[70];
vector<pair<int, pair<int, int>>> v;

int leader(int a){
	return (group[a] == a ? a : group[a] = leader(group[a]));
}

void join(int a, int b){
	group[leader(a)] = leader(b);
}

bool same(int a, int b){
	return leader(a) == leader(b);
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int r, c, a, b, p, f, g, k;
	cin >> r >> c;
	for(int i = 0; i < r; i++)
		group[i] = i;
	for(int i = 0; i < c; i++){
		cin >> a >> b >> p;
		v.push_back({p, {a, b}});
	}
	sort(v.begin(), v.end());
	k = 0;
	for(auto h: v){
		f = h.second.first;
		g = h.second.second;
		if(!same(f, g)){
			join(f, g);
			k += h.first;
		}
	}
	cout << k << '\n';
    return 0;
} 
