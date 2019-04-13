#include <stdlib.h>
#include "dt_utils.h"

    void generateDirectionsArray(int size, struct Direction **array)
    {
        *array = malloc(size * sizeof *array);
    }

    void resetPossibleDirections(struct Direction **array)
    {
        const ARR_SIZE = sizeof(*array) / sizeof((*array)[0]);
        struct Direction d = {.x = 0, .y = 0};

        for (int i = 0; i < ARR_SIZE; i++)
        {
            (*array)[i] = d;
        }
    }

    void setInitialDirectionsValues(int size, struct Direction **array)
    {
        struct Direction d = {.x = 0, .y = 0};

        for (int i = 0; i < size; i++)
        {
            (*array)[i] = d;
        }
    }

    void saveDirection(int posX, int posY, struct Direction **array, int counter)
    {
        struct Direction direction = { .x = 0, .y = 0};
        direction.x = posX;
        direction.y = posY;

        (*array)[counter] = direction;
    }

    struct Direction sortDirection(struct Direction **array, int number_of_directions)
    {
        const ARR_SIZE = sizeof(*array) / sizeof((*array)[0]); // It may not work
        int number_of_options = number_of_directions;
        struct Direction direction_arr[4];

        if (number_of_options == 1)
        {
            return (*array)[number_of_options];
        }

        int sorted_position = -1;
        sorted_position = rand() % number_of_options;

        return (*array)[sorted_position];
    }