// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fórmula de Bhaskara
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1036

#include <stdio.h>
 
int main() {
 
    double a,b,c,d,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    if(d<0 || a==0){
        printf("Impossivel calcular\n");
    }
    if(d==0 && a!=0){
        r1 = -1*b/2;
        printf("R1 = %.5f",r1);
    }
    if(d>0 && a!=0){
        r1 = (-1*b+sqrt(d))/(2*a);
        r2 = (-1*b-sqrt(d))/(2*a);
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
 
    return 0;
}
