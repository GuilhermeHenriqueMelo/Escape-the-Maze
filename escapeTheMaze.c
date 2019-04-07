#include <stdio.h>
#include <stdlib.h>
#include "mz_utils.h"

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

    const maze_size = 5;
    int **m;

    generateMaze(maze_size, maze_size, &m);

    for (int i = 0; i < maze_size; i++)
    {
        for (int j = 0; j < maze_size; j++)
        {
            printf("%d  ", m[i][j]);
            if (j == maze_size-1)
            {
                printf("\n");
            }
        }
    }

    freeMemo(&m, maze_size);

    return 0;
}