// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Gasto de Combustível
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1017

#include <stdio.h>
 
int main() {
 
    int t,v;
    double x;
    scanf("%d",&t);
    scanf("%d",&v);
    x = (t*v);
    x = x/12;
    printf("%.3f\n",x);
 
    return 0;
}
