// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Encaixa ou Não I
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1240

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string num1, num2;
	bool e;
	
	cin >> n;
	while(n--){
		cin >> num1 >> num2;
		e=false;
		if(num2.length()>num1.length())
			e=true;
		else{
			int j=num1.length()-1;
			for(int i=num2.length()-1;i>=0;i--){
				if(num1.at(j)!=num2.at(i))
					e=true;
				j--;
			}
		}
		if(e==true)
			cout << "nao encaixa" << endl;
		else
			cout << "encaixa" << endl;
	}

	return 0;
}
