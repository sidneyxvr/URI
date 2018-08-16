// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequencia IJ 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1096

#include <stdio.h>
 
int main() {
 
    int contador,i=1,j,cont;
    for(contador=1;contador<=5;contador++){
        j=7;
        for(cont=1;cont<=3;cont++){
            printf("I=%d J=%d\n",i,j);
            j -= 1;
        }
        i += 2;
    }
 
    return 0;
}
