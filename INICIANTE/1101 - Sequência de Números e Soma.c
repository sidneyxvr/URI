// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequência de Números e Soma
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1101

#include <stdio.h>
 
int main() {
 
    int m,n,soma,aux;
    while(scanf("%d %d",&m,&n) && m>0 && n>0){
        soma = 0;
        if(m>n){
            aux = n;
            n = m;
            m = aux;
        }
        while(m<=n){
            printf("%d ",m);
            soma += m;
            m++;
        }
        printf("Sum=%d\n",soma);
    }
 
    return 0;
}
