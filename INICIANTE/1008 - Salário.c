// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Salário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1008

#include <stdio.h>
 
int main() {
 
    int n,q;
    double v;
    scanf("%d",&n);
    scanf("%d",&q);
    scanf("%lf",&v);
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2f\n",q*v);
 
    return 0;
}
