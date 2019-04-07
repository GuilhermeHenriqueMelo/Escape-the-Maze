#include <stdio.h>
#include <stdlib.h>
#include "mz_utils.h"

void allocMemo(int size, int ***matrix)
{
    *matrix = malloc(size * sizeof **matrix);

    for (int i = 0; i < size; i++)
    {
        (*matrix)[i] = malloc(size * sizeof (*matrix)[i]);
    }
}

void freeMemo(int ***matrix, int rows)
{
    for (int i=0; i < rows; i++)
    {
        free((*matrix)[i]);
    }
    free(*matrix);
}

int main() 
{
    printf("Maze generation Test: \n\n");

    const N = 5;
    int **m;

    //allocMemo(N, &m);

    generateMaze(N, N, &m);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d  ", m[i][j]);
            if (j == N-1)
            {
                printf("\n");
            }
        }
    }

    freeMemo(&m, N);

    return 0;
}