// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Média 1
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1005

#include <stdio.h>
 
int main() {
 
    double A,B;
    do{
    scanf("%lf",&A);
    }while(A<0 || A>10);
    do{
    scanf("%lf",&B);
    }while(B<0 || B>10);
    printf("MEDIA = %.5f\n", ((A*3.5)+(B*7.5))/11);
 
    return 0;
}
