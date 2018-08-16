// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: OBI URI
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2062

#include <iostream>

using namespace std;

int main(){

	int x;
	cin >> x;
	string n;
	while(x--){
		cin >> n;
		if( n.length() == 3 && n[0] == 'O' && n[1] == 'B' )
			cout << "OBI";
		else if( n.length() == 3 && n[0] == 'U' && n[1] == 'R' ) 
			cout << "URI";
		else 
			cout << n;
		if( x > 0 )
			cout << " ";
	}
	cout << endl;

	return(0);
}
