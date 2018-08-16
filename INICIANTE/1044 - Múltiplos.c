// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Múltiplos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1044

#include <stdio.h>
 
int main() {
 
    int a,b,r;
    scanf("%d %d",&a,&b);
    if(a>b){
        r = a%b;
    }else{
        r = b%a;
    }
    if(r==0){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}
