// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequencia IJ 3
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1097

#include <stdio.h>
 
int main() {
 
    int contador,i=1,j=7,cont;
    for(contador=1;contador<=5;contador++){
        for(cont=1;cont<=3;cont++){
            printf("I=%d J=%d\n",i,j);
            j -= 1;
        }
        j += 5;
        i += 2;
    }

 
    return 0;
}
