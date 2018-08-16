// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Várias Notas Com Validação
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1118

#include <stdio.h>
 
int main() {
 
    int sair;
    double nota1,nota2;
    do{
        do{
            scanf("%lf",&nota1);
            if(nota1<0 || nota1>10){
                printf("nota invalida\n");
            }
        }while(nota1<0 || nota1>10);
        do{
            scanf("%lf",&nota2);
            if(nota2<0 || nota2>10){
                printf("nota invalida\n");
            }
        }while(nota2<0 || nota2>10);
        printf("media = %.2f\n",(nota1+nota2)/2);
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&sair);
        }while(sair!=1 && sair!=2);
    }while(sair==1);
 
    return 0;
}
