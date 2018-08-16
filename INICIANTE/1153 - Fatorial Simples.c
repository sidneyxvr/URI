// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fatorial Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1153

#include <stdio.h>
 
int main() {
 
    int a,b,i,r;
    do{
        scanf("%d",&a);
    }while(a<1 || a>12);
    r=1;
    b=a;
    for(i=1;i<=b;i++){
        r *= a;
        a--;
    }
    printf("%d\n",r);
 
    return 0;
}
