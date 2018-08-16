// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Alarme Despertador
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1103

#include <iostream>

using namespace std;

int main(){
    int h1,h2,m1,m2,minutos;
    while((cin >> h1 >> m1 >> h2 >> m2) && h1!=0 || m1!=0 || h2!=0 || m2!=0 ){
        if(h1>0 && h2==0)
            h2=24;
        h1*=60;
        h2*=60;
        if (h1+m1>h2+m2)
            minutos=1440-((h1+m1)-(h2+m2));
        else
            minutos=(h2+m2)-(h1+m1);
        cout << minutos << endl;
    }
    return 0;
}

