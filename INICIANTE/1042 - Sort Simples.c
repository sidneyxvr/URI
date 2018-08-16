// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sort Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1042

#include <stdio.h>
 
int main() {
 
    int a,b,c,aux,i=0,af,bf,cf;
    scanf("%d %d %d",&a,&b,&c);
    af = a;
    bf = b;
    cf = c;
    while(i<2){
        if(b<a){
            aux = b;
            b = a;
            a = aux;
        }
        if(c<b){
            aux = c;
            c = b;
            b = aux;
        }
        if(c<a){
            aux = c;
            c = a;
            a = aux;
        }
        i++;
    }
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("\n%d\n",af);
    printf("%d\n",bf);
    printf("%d\n",cf);
 
    return 0;
}
