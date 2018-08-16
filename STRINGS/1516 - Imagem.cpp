// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Imagem
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1516

#include <iostream>

using namespace std;

int main (){

    int a , b, c, d;
    char e[100][100];
    while((cin >> a >> b) && a != 0 || b != 0){
        for( int i = 0 ; i < a ; i++ ){
            for( int j = 0; j < b ; j++ )
                cin >> e[i][j];
        }
        cin >> c >> d; 
        for( int i = 0 ; i < a ; i++ ){
            for( int k = 0 ; k < (c/a) ; k++ ){
                for( int j = 0 ; j < a ; j++ ){
                    for( int l = 0 ; l < (d/b) ; l++ ){
                        cout << e[i][j];
                    }
                }
                cout << endl;
            }  
        }
        cout << endl;
    }    
    
    return 0;
}
