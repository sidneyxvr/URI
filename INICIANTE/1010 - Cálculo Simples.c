// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Cálculo Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1010

#include <stdio.h>
 
int main() {
 
    int c1,c2,p1,p2;
    double v1,v2;
    scanf("%d %d %lf",&c1,&p1,&v1);
    scanf("%d %d %lf",&c2,&p2,&v2);
    printf("VALOR A PAGAR: R$ %.2f\n",p1*v1+p2*v2);
 
    return 0;
}
