#include <stdio.h>
#include <stdlib.h>
#include "mz_utils.h"
#include "dt_utils.h"

void freeMemoMaze(int ***matrix, int rows)
{
    for (int i=0; i < rows; i++)
    {
        free((*matrix)[i]);
    }
    free(*matrix);
}

void freeMemoDirections(struct Direction **array)
{
    free(*array);
}


//#######################################################################################################################################


int main() 
{
    printf("Maze generation Test: \n\n");

    const maze_size = 10;
    const weight_matrix_size = maze_size - 2;
    const directions_size = 4;

    int **m = NULL; // Maze
    int **wM = NULL; // Path weight matrix
    struct Direction *d = NULL; // Directions array

    struct Direction direction = {.x = 0, .y = 0};
    int counter = 0;

    generateDirectionsArray(directions_size, &d);
    setInitialDirectionsValues(directions_size, &d);

    direction.x = 1;
    direction.y = 4;

    saveDirection(direction.x, direction.y, &d, counter);
    counter++;

    direction.x = 4;
    direction.y = 4;

    saveDirection(direction.x, direction.y, &d, counter);
    counter++;

    direction.x = 3;
    direction.y = 2;

    saveDirection(direction.x, direction.y, &d, counter);
    counter++;

    for (int i = 0; i < directions_size; i++)
    {
        printf("%d, %d\n", d[i].x, d[i].y);
    }

    freeMemoDirections(&d);

    return 0;
}