#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

const int MAZE_SIZE = 10;
const int WIEGHT_MATRIX_SIZE = MAZE_SIZE - 2;
const int DIRECTIONS_SIZE = 4;

int main()
{
    srand(time(NULL));
    printf("Maze generation Test: \n\n");

    int **m = NULL; // Maze
    int **wM = NULL; // Path weight matrix
    int counter = 0;
    struct Direction *d = NULL; // Directions array
    struct Direction direction = {.x = 0, .y = 0};

    //    const int MAZE_BYTE_SIZE;
    //    const int MAZE_WEIGHT_BYTE_SIZE;
//    const int DIRECTIONS_ARR_BYTE_SIZE = generateDirectionsArray(DIRECTIONS_SIZE, &d);


    return 0;
}