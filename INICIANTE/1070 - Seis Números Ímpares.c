// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Seis Números Ímpares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1070

#include <stdio.h>
 
int main() {
 
    int x,i = 1;
    scanf("%d",&x);
    if(x%2==1){
        printf("%d\n",x);
        i = 2;
    }
    do{
        if(x%2==1){
            x += 2;
        }
        if(x%2==0){
            x += 1;
        }
        printf("%d\n",x);
        i += 1;
    }while(i<=6);
 
    return 0;
}
