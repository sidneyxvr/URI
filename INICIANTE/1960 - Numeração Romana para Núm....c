// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Numeração Romana para Núm...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1960

#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    char r[30];
    scanf("%d",&n);
    r[0]='\0';
    while(n>=500 && n<1000){
        if(n>=900){
            n-=900;
            strcat(r,"CM");
        }else{
            n-=500;
            strcat(r,"D");
        }
    }
    while(n>=100 && n<500){
        if(n>=400){
            n-=400;
            strcat(r,"CD");
        }else{
            n-=100;
            strcat(r,"C");
        }
    }
    while(n>=50 && n<100){
        if(n>=90){
            n-=90;
            strcat(r,"XC");
        }else{
            n-=50;
            strcat(r,"L");
        }
    }

    while(n>=10 && n<50){
        if(n>=40){
            n-=40;
            strcat(r,"XL");
        }else{
            n-=10;
            strcat(r,"X");
        }
    }
    while(n>=5 && n<10){
        if(n>=9){
            n-=9;
            strcat(r,"IX");
        }else{
            n-=5;
            strcat(r,"V");
        }
    }
    while(n>=1 && n<5){
        if(n==4){
            n-=4;
            strcat(r,"IV");
        }else{
            n-=1;
            strcat(r,"I");
        }
    }
    printf("%s\n",r);
 
    return 0;
}
