// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Troca em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1175

#include <stdio.h>
 
int main() {
 
    int v[20],i,aux;
    for(i=0;i<20;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<10;i++){
        aux = v[i];
        v[i] = v[19-i];
        v[19-i] = aux;
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,v[i]);
    }
 
    return 0;
}
