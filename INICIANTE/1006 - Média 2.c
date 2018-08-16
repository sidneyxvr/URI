// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Média 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1006

#include <stdio.h>
 
int main() {
 
    double A,B,C;
    do{
        scanf("%lf",&A);
    }while(A<0 || A>10);
    do{
        scanf("%lf",&B);
    }while(B<0 || B>10);
    do{
        scanf("%lf",&C);
    }while(C<0 || C>10);
    printf("MEDIA = %.1f\n",((A * 2)+ (B * 3) + (C * 5))/10);
 
    return 0;
}
