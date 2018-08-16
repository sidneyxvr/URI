// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Lanche
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1038

#include <stdio.h>
 
int main() {
 
    double y;
    int x,z;
    scanf("%d %d",&x,&z);
    if(x==1){
        y=z*4.00;
    }
    if(x==2){
        y=z*4.50;
    }
    if(x==3){
        y=z*5.00;
    }
    if(x==4){
        y=z*2.00;
    }
    if(x==5){
        y=z*1.50;
    }
    printf("Total: R$ %.2f\n",y);
 
    return 0;
}
