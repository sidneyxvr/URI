// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Distância Entre Dois Pontos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1015

#include <stdio.h>
 
int main() {
 
    double x1,x2,y1,y2;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    printf("%.4f\n",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
 
    return 0;
}
