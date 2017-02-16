#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, a, b;
	cin >> n;
	while(n--){
		string s;
		cin >> a >> b;
		for(int i = a; i <= b; i++){
			s += to_string(i);
		}
		string s1 = s;
		reverse(s.begin(), s.end());
		cout << s1 << s << endl;
	}	
		
	return 0;
}
