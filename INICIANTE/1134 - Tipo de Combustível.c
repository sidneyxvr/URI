// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tipo de Combustível
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1134

#include <stdio.h>
 
int main() {
 
    int alcool,gasolina,diesel,n;
    alcool=gasolina=diesel=0;
    while(scanf("%d",&n) && n!=4){
        if(n>0 && n<4){
            if(n==1){
                alcool += 1;
            }
            if(n==2){
                gasolina += 1;
            }
            if(n==3){
                diesel += 1;
            }
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);

 
    return 0;
}
