// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Positivos e Média
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1064

#include <stdio.h>
 
int main() {
 
    double a,b,c,d,e,f,media,contador = 0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);
    if(a>0){
        contador += 1;
        media += a;
    }
    if(b>0){
        contador += 1;
        media += b;
    }
    if(c>0){
        contador += 1;
        media += c;
    }
    if(d>0){
        contador += 1;
        media += d;
    }
    if(e>0){
        contador += 1;
        media += e;
    }
    if(f>0){
        contador += 1;
        media += f;
    }
    printf("%.f valores positivos\n",contador);
    printf("%.1f\n",media/contador);
 
    return 0;
}
