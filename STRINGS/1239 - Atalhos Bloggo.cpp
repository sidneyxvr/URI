// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Atalhos Bloggo
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1239

#include <iostream>

using namespace std;

int main(){
	
	string a;
	bool j,b;
	while( getline( cin , a ) ){
		j = b = true;
		for(int i = 0 ; i < a.length() ; i++ ){
			if( a.at(i) == '_' ){
				if( j )
					cout << "<i>";
				else
					cout << "</i>";
				j = !j;
			}else if( a.at(i) == '*' ){
				if( b )
					cout << "<b>";
				else
					cout << "</b>";
				b = !b;
			}else
				cout << a.at(i);
		}
		cout << endl;
 	}
			
	return 0;
} 
