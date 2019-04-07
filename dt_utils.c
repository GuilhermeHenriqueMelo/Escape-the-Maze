#include <stdlib.h>
#include "dt_utils.h"

    void resetPossibleDirections(int ***matrix)
    {
        const ARR_SIZE = sizeof(*matrix) / sizeof((*matrix)[0]);

        for (int i = 0; i < ARR_SIZE; i++)
        {
            for (int j = 0; j < ARR_SIZE; j++)
            {
                (*matrix)[i][j] = false;
            }
        }
    }

    void saveDirection(int x, int y, int ***matrix)
    {
        (*matrix)[x][y] = true;
    }

    struct Direction sortDirection(int ***matrix)
    {
        const ARR_SIZE = sizeof(*matrix) / sizeof((*matrix)[0]); // It may not work
        int number_of_options = 0;
        struct Direction direction_arr[4];
        int counter = 0;

        for (int i = 0; i < ARR_SIZE-1; i++)
        {
            for (int j = 0; j < ARR_SIZE-1; j++)
            {
                if ((*matrix)[i][j] == true)
                {
                    direction_arr[counter].x = i;
                    direction_arr[counter].y = j;

                    counter++;
                    number_of_options++;
                }
            }
        }

        if (number_of_options == 1)
        {
            return direction_arr[counter];
        }

        int sorted_position = -1;

        sorted_position = rand() % (counter+1);
        struct Direction aux = direction_arr[sorted_position];

        return direction_arr[sorted_position];
    }