// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Números Positivos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1060

#include <stdio.h>
 
int main() {
 
    double a,b,c,d,e,f,contador = 0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);
    if(a>0){
        contador += 1;
    }
    if(b>0){
        contador += 1;
    }
    if(c>0){
        contador += 1;
    }
    if(d>0){
        contador += 1;
    }
    if(e>0){
        contador += 1;
    }
    if(f>0){
        contador += 1;
    }
    printf("%.f valores positivos\n",contador);
 
    return 0;
}
