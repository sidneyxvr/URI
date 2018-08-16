// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Escolhido
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1983

#include <iostream>

using namespace std;

int main(){
	int caso,matricula,aluno;
	double nota,maior=0;
	cin >> caso;
	while(caso--){
		cin >> matricula >> nota;
		if(nota>maior){
			maior=nota;
			aluno=matricula;
		}
	}
	if(maior<8.00){
		cout << "Minimum note not reached" << endl;
	}else{
		cout << aluno << endl;
	}
	
	return 0;
}
