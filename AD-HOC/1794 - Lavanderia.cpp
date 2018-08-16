// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Lavanderia
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1794

#include <iostream>

using namespace std;

int main (){

    int n, la ,lb ,sa, sb;
    cin >> n >> la >> lb >> sa >> sb;
    if(la <= n && n <= lb  && sa <= n && n <= sb)
        cout << "possivel" << endl;
    else
        cout << "impossivel" << endl;

	return 0;
}

