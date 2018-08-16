// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Senha Fixa
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1114

#include <stdio.h>
 
int main() {
 
    int a;
    do{
        scanf("%d",&a);
        if(a==2002){
            printf("Acesso Permitido\n");
        }else{
            printf("Senha Invalida\n");
        }
    }while(a!=2002);
 
    return 0;
}
