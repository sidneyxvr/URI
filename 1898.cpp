#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	string a, b, cpf, din1, din2;
	cin >> a >> b;
	int j = 0, p = 0;
	bool flag = false;
	for(int i = 0; i < a.size() and p < 2; i++ ){
		if(isalnum(a[i]) and !isalpha(a[i]) and j < 11){
			cpf.push_back(a[i]);
			j++;
		}
		else if(isalnum(a[i]) and !isalpha(a[i]) and cpf.size() == 11){
			din1.push_back(a[i]);
			if(flag) p++;
		}
		else if(a[i] == '.' and cpf.size() == 11){
			din1.push_back(a[i]);
			flag = true;
		}
	}
	p = 0; flag = false;
	for(int i = 0; i < b.size() and p < 2; i++){
		if(isalnum(b[i]) and !isalpha(b[i]) or b[i] == '.'){
			din2.push_back(b[i]);
			if(b[i] == '.') flag = true;
			else if (flag) p++;
		}
	}
	cout << "cpf " << cpf << '\n';
		cout << fixed << setprecision(2) << (stod(din1) + stod(din2) ) << '\n';
	
	return 0;
}
