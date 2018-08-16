// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Preenchimento de Vetor II
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1177

#include <stdio.h>
 
int main() {
 
    int v[1000],i,t,n=0;
    scanf("%d",&t);
    for(i=0;i<1000;i++){
        if(t==n){
            n=0;
        }
        v[i]=n;
        n++;
    }
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,v[i]);
    }
 
    return 0;
}
