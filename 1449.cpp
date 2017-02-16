#include <bits/stdc++.h>

using namespace std;

void split(const string &s, vector<string> &elems) {
    stringstream ss;
    ss.str(s);
    string item;
    while (std::getline(ss, item, ' '))
        elems.push_back(item);
}

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int t, m, n;
	map<string, string> mp;
	vector<string> v;
	string s, i;
	cin >> t;
	while(t--){
		cin >> m >> n;
		while(m--){
			cin >> i;
			cin.ignore();
			getline(cin, s);
			mp[i] = s;
		}
		while(n--){
			getline(cin, s);
			split(s, v);
			bool fl = false;
			for(string p: v){
				if(fl) cout << ' ';
				fl = true;
				if(mp[p] != "") cout << mp[p];
				else cout << p;
				
			}
			cout << '\n';
			v.clear();
		}
		cout << '\n';
		mp.clear();
	}

	return 0;
}
