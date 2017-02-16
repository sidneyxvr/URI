#include <bits/stdc++.h>

using namespace std;

bool f(pair<int, char> a, pair<int, char> b){ 
	return (a.first < b.first ? true : 
	a.first == b.first and a.second > b.second ?
	true : false);
}

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	string s;
	vector<pair<int, char>> v;
	bool fl = false;
	while(getline(cin, s)){
		sort(s.begin(), s.end());
		char k = s[0];
		int c = 1;
		for(int i = 1; i < s.size(); i++){
			if(k == s[i]) c++;
			else{
				v.push_back({c, k});
				k = s[i];
				c = 1;
			}
		}
		if(fl) cout << '\n';
		fl = true;
		v.push_back({c, k});
		sort(v.begin(), v.end(), f);
		for(auto p: v)
			cout << (int)p.second << ' ' << p.first << '\n';
		v.clear();
	}

	return 0;
}
