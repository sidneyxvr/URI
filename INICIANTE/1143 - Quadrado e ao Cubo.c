// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Quadrado e ao Cubo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1143

#include <stdio.h>
 
int main() {
 
    int a,i,n;
    do{
        scanf("%d",&a);
    }while(a<0);
    n = 1;
    for(i=1;i<=a;i++){
        printf("%d %d %d\n",n,n*n,n*n*n);
        n++;
    }
 
    return 0;
}
