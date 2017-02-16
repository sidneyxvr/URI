#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		sort(s.begin(), s.end());
		do{
			for(char p: s) cout << p;
			cout << '\n';
		}while(next_permutation(s.begin(), s.end()));
		cout << '\n';	
	}
	
	return 0;
}
