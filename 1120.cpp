#include <iostream>
#include <string>

using namespace std;

int main(){

	string nome, resultado;
	char erro;
	while((cin >> erro >> nome) && erro! = '0'){
		for(int i = 0; i < nome.length(); i++){
			if(nome.at(i)!=erro)
				resultado+=nome.at(i);
		}
		nome = resultado;
		resultado.clear();
		bool zero = false;
		for(int i = 0; i < nome.length(); i++){
			if(zero)
				resultado += nome.at(i);
			if(nome.at(i)!='0' && !zero){
				resultado += nome.at(i);
				zero = true;
			}
		}
		if(!zero)
			resultado = '0';
		nome = resultado;
		cout << nome << endl;
		nome.clear();
		resultado.clear();
	}
	return 0;
}
