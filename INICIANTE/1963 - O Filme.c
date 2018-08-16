// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Filme
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1963

#include <stdio.h>
 
int main() {
 
    double a,b,p;
    scanf("%lf %lf",&a,&b);
    p=((b/a)-1)*100;
    printf("%.2f%%\n",p);
 
    return 0;
}
