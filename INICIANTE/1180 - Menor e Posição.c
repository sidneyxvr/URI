// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Menor e Posição
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1180

#include <stdio.h>
 
int main() {
 
    int n,i,x,p,v[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
        if(i==0){
            x=v[i];
            p=i;
        }
        if(v[i]<x && i>0){
            x=v[i];
            p=i;
        }
    }
    printf("Menor valor: %d\n",x);
    printf("Posicao: %d\n",p);
 
    return 0;
}
