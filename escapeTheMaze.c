#include <stdio.h>
#include <stdlib.h>
#include "mz_utils.h"
#include "dt_utils.h"

void freeMemo(int ***matrix, int rows)
{
    for (int i=0; i < rows; i++)
    {
        free((*matrix)[i]);
    }
    free(*matrix);
}


//#######################################################################################################################################


int main() 
{
    printf("Maze generation Test: \n\n");

    const maze_size = 5;
    const directions_size = 2;
    int **m = NULL;
    int **d = NULL;

    generateMaze(maze_size, maze_size, &m);

    generateMaze(directions_size, directions_size, &d);

    // For the directions matrix
    for (int i = 0; i < directions_size; i++)
    {
        for (int j = 0; j < directions_size; j++)
        {
            printf("%d  ", d[i][j]);
            if (j == directions_size-1)
            {
                printf("\n");
            }
        }
    }


    // For the Maze itself
    // for (int i = 0; i < maze_size; i++)
    // {
    //     for (int j = 0; j < maze_size; j++)
    //     {
    //         printf("%d  ", m[i][j]);
    //         if (j == maze_size-1)
    //         {
    //             printf("\n");
    //         }
    //     }
    // }

    freeMemo(&m, maze_size);
    freeMemo(&d, directions_size);

    return 0;
}