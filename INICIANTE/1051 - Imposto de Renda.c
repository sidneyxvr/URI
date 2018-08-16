// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Imposto de Renda
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1051

#include <stdio.h>
 
int main() {
 
    double a,ir;
    ir=0;
    scanf("%lf",&a);
    if(a<=2000){
        printf("Isento\n");
        a=0;
    }
    if(a>2000){
        a -= 2000;
    }
    if(a>1000){
        ir += 1000*0.08;
        a -= 1000;
    }else{
        ir += a*0.08;
        a=0;
    }
    if(a>1500){
        ir += 1500*0.18;
        a -= 1500;
    }else{
        ir += a*0.18;
        a=0;
    }
    ir += a*0.28;
    if(ir!=0){
        printf("R$ %.2f\n",ir);
    }
 
    return 0;
}
