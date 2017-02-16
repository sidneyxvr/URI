#include <bits/stdc++.h>

using namespace std;

int main(){

	int caso;
	string nome;
	
	cin >> caso;
	
	while(caso--){
		cin >> nome;
		if(nome.length() == 5)
			cout << "3" << endl;
		else if(nome[0] == 'o' && nome[2] == 'e'
			 || nome[0] == 'o' && nome[1] == 'n'
			 || nome[1] == 'n' && nome[2] == 'e')
			 cout << "1" << endl;
		else
			cout << "2" << endl;
		
	}
		
	return 0;
}
