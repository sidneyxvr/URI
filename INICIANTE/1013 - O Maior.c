// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Maior
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1013

#include <stdio.h>
 
int main() {
 
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("%d eh o maior\n",a);
    }
    if (b>a && b>c){
        printf("%d eh o maior\n",b);
    }
    if (c>a && c>b){
        printf("%d eh o maior\n",c);
    }
 
    return 0;
}
