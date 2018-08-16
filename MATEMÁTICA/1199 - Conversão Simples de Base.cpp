// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Conversão Simples de Base
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1199

#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

	string nome;
	long aux=1, x, h=0, r;
	
	while((cin >> nome) && nome.at(0)!='-'){	
		aux=1;
		r=h=0;
		if(nome.length()>1 && ((nome.at(1)=='x') || (nome.at(1)=='X'))){
			for(int i=nome.length();i>2;i--){
				x=nome.at(i-1)-'0';
				r=r+(x*aux);
				aux*=10;
			}	
			if(r>0){
				aux=1;
				for(int i=nome.length();i>2;i--){
					if(!isalpha(nome.at(i-1))){
						nome.at(i-1)=tolower(nome.at(i-1));
						h+=(nome.at(i-1)-'0')*aux;
					}
					else{
						nome.at(i-1)=tolower(nome.at(i-1));
						h+=(nome.at(i-1)-87)*aux;
					}
					aux*=16;
				}
				cout << h << endl;
			}
		}else if(nome.length()==1){
			cout << "0x" << nome << endl;		
		}else{
			for(int i=nome.length();i>0;i--){
				x=nome.at(i-1)-'0';
				r=r+(x*aux);
				aux*=10;
			}
			if(r>0){
				printf("0x%lX\n",r);
			}
		}
		nome.at(0)='\0';
	}
	return 0;
}
