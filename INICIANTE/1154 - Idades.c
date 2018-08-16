// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Idades
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1154

#include <stdio.h>
 
int main() {
 
    double a,i,soma;
    soma=0;
    i=0;
    do{
        scanf("%lf",&a);
        if(a>0){
            soma += a;
            i++;
        }
    }while(a>0);
    printf("%.2f\n",soma/i);
 
    return 0;
}
