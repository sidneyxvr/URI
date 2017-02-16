#include <bits/stdc++.h>

using namespace std;

main(){
	string s, bigger = "", aux;
	while(getline(cin, s)){
		if(s[0] == '0'){
			cout << "\nThe biggest word: " << bigger << '\n';
			break;
		}
		int c = 0;
		for(int i = 0; i < s.size(); i++){
			if(isspace(s[i])){
				cout << c << '-';
				c = 0;
				aux.clear();
			}else{
				c++;
				aux.push_back(s[i]);
			}
			if(aux.size() >= bigger.size())
				bigger = aux;
		}
		aux.clear();
		cout << c << '\n';
	}
}
