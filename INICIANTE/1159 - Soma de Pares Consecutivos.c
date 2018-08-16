// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Soma de Pares Consecutivos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1159

#include <stdio.h>
 
int main() {
 
    int x,a,soma,i;
    do{
        i=soma=0;
        scanf("%d",&x);
        a=x;
        while(i<=4){
            if(x%2==0){
                soma+=x;
                i++;
            }
            x++;
        }
    if(a!=0){
        printf("%d\n",soma);
    }
    }while(a!=0);
 
    return 0;
}
