// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tempo de Jogo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1046

#include <stdio.h>
 
int main() {
 
    int a,b,t;
    scanf("%d %d",&a,&b);
    if(a==b){
        t=24;
    }
    if(a>b){
        t=24+b-a;
    }
    if(b>a){
        t=b-a;
    }
    printf("O JOGO DUROU %d HORA(S)\n",t);
 
    return 0;
}
