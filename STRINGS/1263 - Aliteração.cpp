// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Aliteração
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1263

#include <iostream>

using namespace std;

int main (){

    string n;
    char c;    
    
    while( getline( cin , n ) ){
        int i = 1;
        bool b = true;
        int contador = 0;
        if( !isspace(n[0]) )
            c = n[0];   
        else{
            for(int i = 0 ; i < n.length() ; i++ ){
                c = n[i+1];
                if( !isspace(n[i+1]) )
                    break;   
            }
        }
        for( int j = i ; j < n.length() ; j++ ){
            if( isspace(n[j]) ){
                if( tolower(c) == tolower(n[j+1]) && b == true ){
                    if(b)
                        contador++;
                    b = false;  
                }
                if(c != n[j+1])
                    b = true;
                c = n[j+1];
            }            
        }
        cout << contador << endl;
    }

    return 0;
}
