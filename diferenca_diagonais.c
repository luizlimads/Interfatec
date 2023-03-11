/*
Autor: Thomas Ferreira
Data: 10/03/23

Descrição: Diferança entre diagonais de uma matriz quadrada.
*/

#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"portuguese");

    int l, i, j, soma1 = 0, soma2 = 0;

    printf("Número de linhas e colunas (matriz quadrada): ");
    scanf("%d", &l);
    int m[l][c];
    
    //Atribuindo valores à matriz
    printf("\n");
    for(i = 0; i < l; i++){
        for(j = 0; j < l; j++){
            printf("%d x %d: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }

        //Somando valores da diagonal esquerda
        soma1 += m[i][i];

        //Somando valores da diagonal esquerda
        soma2 += m[i][l - i - 1];
    }

    //Apresentando matriz
    printf("\n");
    for(i = 0; i < l; i++){
        for(j = 0; j < l; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    //Mostrando resultado
    if(soma1 > soma2 || soma1 == soma2)
        printf("A diferença entre as matrizes é %d\n", soma1 - soma2);
    else
        printf("A diferença entre as matrizes é %d\n", soma2 - soma1);

    return;
}
