// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: LED
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1168

#include <iostream>
#include <string.h>
#include <stdio.h>
#define MAX 100000
using namespace std;

int leds(char *led){
	int soma=0;
	for(int i=0;i<strlen(led);i++){
		if(led[i]=='0')
			soma+=6;
		if(led[i]=='1')
			soma+=2;
		if(led[i]=='2')
			soma+=5;
		if(led[i]=='3')
			soma+=5;
		if(led[i]=='4')
			soma+=4;
		if(led[i]=='5')
			soma+=5;
		if(led[i]=='6')
			soma+=6;
		if(led[i]=='7')
			soma+=3;
		if(led[i]=='8')
			soma+=7;
		if(led[i]=='9')
			soma+=6;
	}
	return (soma);
}

int main(){
	char led[MAX];
	int n;
	scanf("%d ",&n);
	while(n--){ 
		cin.getline(led,MAX);
		cout << leds(led) << " leds" << endl;	
	}
	return 0;
}
