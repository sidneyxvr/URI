// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Múltiplos de 13
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1132

#include <stdio.h>
 
int main() {
 
    int x,y,z,soma;
    scanf("%d",&x);
    scanf("%d",&y);
    soma = 0;
    z = x;
    if(z>y){
        while(x>=y){
            if(x%13!=0){
                soma += x;
            }
            x -= 1;
        }
    }
    if(z<y){
        while(x<=y){
            if(x%13!=0){
                soma += x;
            }
            x += 1;
        }
    }
    printf("%d\n",soma);
 
    return 0;
}
