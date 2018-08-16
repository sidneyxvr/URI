// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tipos de Triângulos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1045

#include <stdio.h>
 
int main() {
 
    double a,b,c,aux,n=0;
    do{
        scanf("%lf %lf %lf",&a,&b,&c);
    }while(a<0 || b<0 || c<0);
    if(b>=c && b>=a){
        aux = b;
        b = a;
        a = aux;
    }
    if(c>=b && c>=a){
        aux = c;
        c = a;
        a = aux;
    }
    if(c>=b && c<=a){
        aux = c;
        c = b;
        b = aux;
    }
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
        n=1;
    }
    if(a*a==((b*b)+(c*c)) && n==0){
        printf("TRIANGULO RETANGULO\n");
    }
    if(a*a>((b*b)+(c*c)) && n==0){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a*a<((b*b)+(c*c))&& n==0){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && a==c && n==0){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a==b && a!=c) || (b==c && b!=a) && n==0){
        printf("TRIANGULO ISOSCELES\n");
    }
 
    return 0;
}
