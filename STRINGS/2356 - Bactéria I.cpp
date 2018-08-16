// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Bactéria I
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2356

#include <bits/stdc++.h>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  string s1, s2;
  while(cin >> s1){
    cin >> s2;
    cout << (s1.find(s2) == -1 ? "Nao resistente": "Resistente") << '\n';
  }

  return 0;
}

