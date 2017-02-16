#include <bits/stdc++.h>

using namespace std;

bool ver(string s){
	bool min = false, mai = false, num = false, esp = true, teucu = true;
	if(s.size() < 6 || s.size() > 32)
		return false;
	for(int i = 0; i < s.size(); i++){
		if(islower(s[i]))
			min = true;
		else if(isupper(s[i]))
			mai = true;
		else if(isdigit(s[i]))
			num = true;
		else if(isspace(s[i]))
			esp = false;
		if(!isalnum(s[i]))
			teucu = false;		
		
	}
	if(min && mai && num && esp && teucu)
		return true;
	return false;
}

main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string s;
	while(getline(cin, s))
		cout << (ver(s) ? "Senha valida.\n" : "Senha invalida.\n");
}
