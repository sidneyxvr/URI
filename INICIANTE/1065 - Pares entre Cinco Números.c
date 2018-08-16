// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pares entre Cinco Números
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1065

#include <stdio.h>
 
int main() {
 
    int a,b,c,d,e,contador = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    if(a%2==0){
        contador += 1;
    }
    if(b%2==0){
        contador += 1;
    }
    if(c%2==0){
        contador += 1;
    }
    if(d%2==0){
        contador += 1;
    }
    if(e%2==0){
        contador += 1;
    }
    printf("%d valores pares\n",contador);
 
    return 0;
}
