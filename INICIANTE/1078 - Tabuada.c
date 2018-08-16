// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tabuada
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1078

#include <stdio.h>
 
int main() {
 
    int n,i = 1;
    do{
        scanf("%d",&n);
    }while(n<2 || n>1000);
    do{
        printf("%d x %d = %d\n",i,n,(i*n));
        i += 1;
    }while(i<=10);
 
    return 0;
}
