// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Conversa Internacional
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1581

#include <iostream>

using namespace std;

int main(){
	
	string n, m;
	int c, x;
	bool a;
	cin >> x;
	while(x--){
		cin >> c;
		a = false;
		for(int i=0;i<c;i++){
			cin >> n;
			if(i==0)
				m=n;
			else if( n!= m )
				a = true;	
		}
		if( a )
			cout << "ingles" << endl;
		else
			cout << n << endl;
	}
	
	return 0;
}
