#include <stdio.h>
#include <stdlib.h>
#include "mz_utils.h"
#include "dt_utils.h"

struct Player 
{
    int posX, posY;
};

void freeMemoMaze(int ***matrix, int rows)
{
    for (int i=0; i < rows; i++)
    {
        free((*matrix)[i]);
    }
    free(*matrix);
}

void freeMemoDirections(struct Direction **array, int rows)
{
    free(*array);
}


//#######################################################################################################################################


int main() 
{
    printf("Maze generation Test: \n\n");

    const maze_size = 5;
    const directions_size = 4;
    int **m = NULL; // Maze
    struct Direction *d = NULL; // Directions array

    generateDirectionsArray(directions_size, &d);
    setInitialDirectionsValues(directions_size, &d);

    int x, y = 0;
    int counter = 0;

    x = 0;
    y = 1;
    saveDirection(x, y, &d, counter);
    counter++;

    x = 2;
    y = 3;
    saveDirection(x, y, &d, counter);
    counter++;

    for (int i = 0; i < directions_size; i++)
    {
        printf("%d, %d\n", d[i].x, d[i].y);
    }

    freeMemoDirections(&d, directions_size);

    return 0;
}