#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	string s;
	while(cin >> s){
		int e = 1;
		while(s.size()){
			cout << setw(e) << s[0];
			for(int i = 1; i < s.size(); i++)
				cout << ' ' << s[i];
			cout << '\n';
			e++;
			s.pop_back();
		}
		cout << '\n';
	}

	return 0;
}
