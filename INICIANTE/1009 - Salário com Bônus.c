// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Salário com Bônus
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1009

#include <stdio.h>
 
int main() {
 
    char n[20];
    double s,v;
    scanf("%s",n);
    scanf("%lf",&s);
    scanf("%lf",&v);
    printf("TOTAL = R$ %.2f\n", s+v*0.15);
 
    return 0;
}
