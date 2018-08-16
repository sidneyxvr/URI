// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pares, Ímpares, Positivos...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1066

#include <stdio.h>
 
int main() {

    int a,b,c,d,e,contador = 0,ci = 0,cp = 0,cn = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    if(a%2==0){
        contador += 1;
    }else{
        ci += 1;
    }
    if(b%2==0){
        contador += 1;
    }else{
        ci += 1;
    }
    if(c%2==0){
        contador += 1;
    }else{
        ci += 1;
    }
    if(d%2==0){
        contador += 1;
    }else{
        ci += 1;
    }
    if(e%2==0){
        contador += 1;
    }else{
        ci =+ 1;
    }
    if(a>0){
        cp += 1;
    }
    if(a<0){
        cn += 1;
    }
    if(b>0){
        cp += 1;
    }
    if(b<0){
        cn += 1;
    }
    if(c>0){
        cp += 1;
    }
    if(c<0){
        cn += 1;
    }
    if(d>0){
        cp += 1;
    }
    if(d<0){
        cn += 1;
    }
    if(e>0){
        cp += 1;
    }
    if(e<0){
        cn += 1;
    }
    printf("%d valor(es) par(es)\n",contador);
    printf("%d valor(es) impar(es)\n",ci);
    printf("%d valor(es) positivo(s)\n",cp);
    printf("%d valor(es) negativo(s)\n",cn);
 
    return 0;
}
