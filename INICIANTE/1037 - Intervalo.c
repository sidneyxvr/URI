// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Intervalo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1037

#include <stdio.h>
 
int main() {

    double n;
    scanf("%lf",&n);
    if(n>=0 && n<= 25){
        printf("Intervalo [0,25]\n");
    }
    if(n>25 && n<=50){
        printf("Intervalo (25,50]\n");
    }
    if(n>50 && n<=75){
        printf("Intervalo (50,75]\n");
    }
    if(n>75 && n<=100){
        printf("Intervalo (75,100]\n");
    }
    if(n<0 || n>100){
        printf("Fora de intervalo\n");
    }

 
    return 0;
}
