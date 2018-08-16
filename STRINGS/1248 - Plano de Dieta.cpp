// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Plano de Dieta
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1248

#include <bits/stdc++.h>

using namespace std;

int main (){

    int q;
    int v[27];
    string s, str;
    cin >> q;
    getchar();
    while(q--){
		memset(v,0,sizeof(v));   
    	getline( cin, s );
    	bool a = false;
    	for( int i = 0; i < s.length(); i++ )
    		v[ s[i] - 'A' ] = 1;
    	for( int i = 0; i < 2; i++ ){
    		getline( cin, str );
    		for( int j = 0; j < str.length(); j++ ){
    			if( v[ str[j] - 'A' ] )
    				v[ str[j] - 'A' ] = 0;
    			else
    				a = true;
    		}
    	}
    	if( a )
			cout << "CHEATER" << endl;
		else{
	 	    for( int i = 0; i < 27; i++ ){
				if( v[i] != 0 )
					cout << (char)(i + 'A');
			}
			cout << endl;
	    }
    	
    }
    
	return 0;
}
