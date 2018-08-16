// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Escada Rolante
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1793

#include <iostream>

using namespace std;

int main(){
    int tempo, caso, x , y=0;
    while(cin >> caso && caso != 0){
        tempo=0;
        for(int i=0;i<caso;i++){
            cin >> x;
            if(i == 0)
                tempo+=10;
            else if(x-y>10)
                tempo+=10;
            else
                tempo+=x-y;
            y=x;
        }
    cout << tempo << endl;
    }
}
