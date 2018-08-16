// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Aumento de Salário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1048

#include <stdio.h>
 
int main() {
 
    double i,s,a,p;
    scanf("%lf",&s);
    if(s>=0 && s<=400){
        p = 0.15;
        a = s*p;
        i = s+a;
    }if(s>400 && s<=800){
        p = 0.12;
        a = s*p;
        i = s+a;
    }
    if(s>800 && s<=1200){
        p = 0.10;
        a = s*p;
        i = s+a;
    }
    if(s>1200 && s<=2000){
        p = 0.07;
        a = s*p;
        i = s+a;
    }
    if(s>2000){
        p = 0.04;
        a = s*p;
        i = s+a;
    }
    printf("Novo salario: %.2f\n",i);
    printf("Reajuste ganho: %.2f\n",a);
    printf("Em percentual: %.0f %%\n",p*100);
 
    return 0;
}
