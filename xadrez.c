#include <stdio.h>

int main(){
    printf ("Desafio xadrez\n");
    printf ("Novo commit\n")
    struct CartaSuperTrunfo carta 1, carta2;
    printf ("insira os dados da primeira carta:");
    lerCarta(&carta1);
    printf("insira os dados da segunda carta:")
    lerCarta(&carta2);
    printf("\n\nDados da primeira carta:\n");
    printf("Estado:%c\nCodigo:%s\nCidade:%s\nPopulacao:%d\n",carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao);
    printf("\n\nDados da segunda carta:\n");
    printf("Estado:%c\nCodigo:%s\nCidade:%s\nPopulacao:%d\n",carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao);
    return 0;
}