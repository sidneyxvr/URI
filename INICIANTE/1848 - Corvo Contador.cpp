// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Corvo Contador
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1848

#include <iostream>

using namespace std;

int main(){
	
	string n;
	int c;
	
	while( getline( cin , n ) ){
		if(n!="caw caw"){
			if( n == "--*" )
				c += 1;
			else if( n == "-*-" )
				c += 2;
			else if( n == "-**" )
				c += 3;
			else if( n == "*--" )
				c += 4;
			else if( n == "*-*" )
				c+= 5;
			else if( n == "**-" )
				c += 6;
			else if( n == "***" )
				c += 7;
		}
		else{
			cout << c << endl;
			c = 0;
		}
		
	}
	
	return 0;
}
