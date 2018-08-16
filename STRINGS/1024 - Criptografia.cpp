// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Criptografia
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1024

#include <iostream>
#include <string.h>
#include <stdio.h>
#define MAX 1000000
using namespace std;

void primeira(char *nome){
	for(int i=0;i<strlen(nome);i++)
		if(isalpha(nome[i])){
			nome[i]=nome[i]+3;
		}
}

void segunda(char *nome){
	char aux[MAX];
	int n = strlen(nome)-1;
	for(int i=0;i<strlen(nome);i++){
		aux[i]=nome[n];
		n--;
	}
	for(int i=0;i<strlen(nome);i++){
		nome[i]=aux[i];
	}
}

void terceira(char *nome){
	int n = strlen(nome);
	for(int i=n/2;i<n;i++){
		nome[i]=nome[i]-1;
	}
}

int main(){

	char nome[MAX];
	int n;
	cin >> n;
	scanf("%d ",&n);
	for(int i=0;i<n;i++){
		cin.getline(nome,MAX);
		primeira(nome);	
		segunda(nome);
		terceira(nome);
		cout << nome << endl;
	}
	return 0;
}
