// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Roberto e a Sala Desenfreada
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1953

#include <bits/stdc++.h>

using namespace std;

int main (){

    int v[3], n, a;
    string s;
    while(cin >> n){
        memset(v,0,sizeof(v));
        while(n--){
            cin >> a >> s;
            if(s == "EHD")
                v[0]++;
            else if(s == "EPR")
                v[1]++;
            else
                v[2]++;
        }
        cout << "EPR: " << v[1] << endl;
        cout << "EHD: " << v[0] << endl;
        cout << "INTRUSOS: " << v[2] << endl;
    }

	return 0;
}

