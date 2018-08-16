// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Números Ímpares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1067

#include <stdio.h>
 
int main() {
 
    int x,i = 1,impar = 1;
    do{
        scanf("%d",&x);
    }while(x<=1 || x>=1000);


    do{
        if(impar%2==1){
            printf("%d\n",impar);
        }
        i += 1;
        impar += 1;
    }while(i<=x);
 
    return 0;
}
