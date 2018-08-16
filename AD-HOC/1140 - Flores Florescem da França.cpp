// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Flores Florescem da França
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1140

#include <iostream>

using namespace std;

int main(){
    string nome;
    char n;
    while(getline(cin,nome) && nome.at(0)!='*'){
        n=tolower(nome.at(0));
        bool b=false;
        for(int i=0;i<nome.length()-1;i++){
            if(isspace(nome.at(i)))
                if(tolower(nome.at(i+1))!=n)
                    b=true;
        }
        if(b==false) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}

