// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Preenchimento de Vetor III
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1178

#include <stdio.h>
 
int main() {
 
    double v[100];
    int i;
    scanf("%lf",&v[0]);
    for(i=1;i<100;i++){
        v[i]=v[i-1]/2;
    }
    for(i=0;i<100;i++){
        printf("N[%d] = %.4f\n",i,v[i]);
    }
 
    return 0;
}
