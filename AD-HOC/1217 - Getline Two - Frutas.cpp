// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Getline Two - Frutas
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1217

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	string frutas;
	int caso, f, j=1;
	double preco, total=0, ft=0, dia=0;
	scanf("%d",&caso);
	while(caso--){
		scanf("%lf \n",&preco);

		getline(cin,frutas);
		
		f=1;
		for(int i=0;i<frutas.length();i++){
			if(isspace(frutas.at(i)))
				f+=1;
		}
		dia+=1;
		ft+=f;
		total+=preco;
		printf("day %d: %.d kg\n",j,f);
		j++;
	}	
	printf("%.2f kg by day\n",ft/dia);
	printf("R$ %.2f by day\n",total/dia);	
	
	return 0;
}
