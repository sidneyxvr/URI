// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequência de Sequência
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2028

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	int num, valor, c, r, j, quant, caso=1;
	bool espaco;	
	while(cin >> num){	
	espaco=false;
		quant = 1;
		valor=num;
		while(valor>0){
			quant+=valor;
			valor--;
		
		}
		cout << "Caso " << caso << ": " << quant << " numero";
		if(quant>1)
			cout << "s" << endl;		 	
		else
			cout << endl;
		cout << "0";
		for(int i=1;i<=num;i++){
			if(!espaco)
				cout << " ";
			espaco=true;
		 	r=i;
		 	j=0;
			while(j<r){
				cout << r;
				if(j<r-1)
					cout << " ";
				j++; 
				quant++;
			}
			if(i<num)
				cout << " ";
		}	
		caso++;
		cout << endl << endl;
	}
	return 0;
}
