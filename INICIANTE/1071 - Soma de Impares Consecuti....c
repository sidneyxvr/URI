// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Soma de Impares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1071

#include <stdio.h>
 
int main() {
 
    int x,y,soma;
    scanf("%d",&x);
    scanf("%d",&y);
    soma = 0;
    if(x>y){
        x -=1;
    }
    if(x<y){
        x += 1;
    }
    while(x>y){
        if(((x>y) && (x%2==1)) || ((x>y) && (-x%2==1))){
                soma = soma + x;
        }
        x -= 1;
    }
    while(x<y){
        if(((x<y) && (x%2==1)) || ((x<y) && (-x%2==1))){
                soma = soma + x;
        }
        x += 1;
    }
    printf("%d\n",soma);
 
    return 0;
}
