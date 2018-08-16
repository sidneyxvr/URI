// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Feedback
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1546

#include <iostream>

using namespace std;

int main(){
	
	int a, b, c;
	cin >> a;
	while( a-- ){
		cin >> c;
		while( c-- ){
			cin >> b;
			if( b == 1 )
				cout << "Rolien" << endl;
			else if( b == 2 )
				cout << "Naej" << endl;
			else if( b == 3 )
				cout << "Elehcim" << endl;
			else
				cout << "Odranoel" << endl;
		}
	}
	
			
	return 0;
} 
