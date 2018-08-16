// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Domingo de Manhã
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2003

#include <iostream> 
#include <stdio.h> 

using namespace std;

int main(){
	int h,m,atraso,total;
	while(scanf("%d:%d",&h,&m)!=EOF){
		h*=60;
		total=h+m;
		atraso=total-420;
		if(atraso<0)
			atraso=0;
		cout << "Atraso maximo: " << atraso << endl;
	}
	return 0;
}
