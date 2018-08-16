// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Leitura Ótica
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1129

#include <iostream>

using namespace std;

int main(){
	int a,b,c,d,e,caso,teste;
	while((cin >> caso) && caso!=0){
		while(caso--){
			teste=0;
			cin >> a >> b >> c >> d >> e;
			if(a<=127)
				teste+=1;
			if(b<=127)
				teste+=2;
			if(c<=127)
				teste+=4;
			if(d<=127)
				teste+=8;
			if(e<=127)
				teste+=16;
			if(teste!=1 && teste!=2 && teste!=4 && teste!=8 && teste!=16)
				cout << "*" << endl;
			if(e<=127 && teste==16)
				cout << "E" << endl;
			if(d<=127 && teste==8)
				cout << "D" << endl;
			if(c<=127 && teste==4)
				cout << "C" << endl;
			if(b<=127 && teste==2)
				cout << "B" << endl;
			if(a<=127 && teste==1)
				cout << "A" << endl;
		}
	}
	return 0;
}
