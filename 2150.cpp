#include <bits/stdc++.h>

using namespace std;

int main(){

	string s1, s2;
	while(cin >> s1){
		cin.ignore();
		getline(cin, s2);
		int c = 0;
		for(int i = 0; i < s1.length(); i++){
			for(int j = 0; j < s2.length(); j++){
				if(s1[i] == s2[j])
					c++;
			}
		}
		cout << c << endl;
	}

	return 0;
}
