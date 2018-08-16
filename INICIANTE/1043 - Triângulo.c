// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Triângulo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1043

#include <stdio.h>
 
int main() {
 
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("Perimetro = %.1f\n",a+b+c);
    }else{
        printf("Area = %.1f\n",(a+b)*c/2);
    }
 
    return 0;
}
