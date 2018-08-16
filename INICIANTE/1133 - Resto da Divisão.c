// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Resto da Divisão
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1133

#include <stdio.h>
 
int main() {
 
    int a,b,aux;
    scanf("%d %d",&a,&b);
    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }
    a++;
    while(a<b){
        if(a%5==2 || a%5==3){
            printf("%d\n",a);
        }
        a++;
    }
 
    return 0;
}
