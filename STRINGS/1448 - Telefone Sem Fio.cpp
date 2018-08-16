// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Telefone Sem Fio
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1448

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	string n, time1, time2;
	int t1, t2, x, k = 0;
	bool b;
	int e = 3;
		
	cin >> x;
	getchar();
	while(x--){
		t1 = 0;
		t2 = 0;
		e = 3;
		b = false;
		getline( cin , n );		
		getline( cin , time1 );		
		getline( cin , time2 );
		for( int i = 0 ; i < n.length() ; i++ ){
			if( time1[i] == n[i] )
				t1 += 1;
			else if(e==3 && !b)
				e=2;
			if( time2[i] == n[i] )
				t2 += 1;
			else if(e==2 && !b)
				e=3;
			else if( e==3 && !b )
				e=1;
			if(e!=3)
				b = true;
		}
		k++;
		cout << "Instancia " << k << endl;
		if( t1 > t2 )
			cout << "time 1" << endl;
		else if( t1 == 0 && t1 == t2 )
			cout << "empate" << endl;
		else if( t1 == t2 && e == 3)
			cout << "empate" << endl;
		else if( t1 == t2 && e == 2)
			cout << "time 2" << endl;
		else if( t1 == t2 && e == 1)
			cout << "time 1" << endl;
		else
			cout << "time 2" << endl;
		cout << endl;
	}

	return 0;
}
