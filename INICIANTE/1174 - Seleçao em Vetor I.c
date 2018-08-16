// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Seleçao em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1174

#include <stdio.h>
 
int main() {
 
    double v[100];
    int i;
    for(i=0;i<100;i++){
        scanf("%lf",&v[i]);
    }
    for(i=0;i<100;i++){
        if(v[i]<=10){
            printf("A[%d] = %.1f\n",i,v[i]);
        }
    }
 
    return 0;
}
